<?php

/**
 * @file
 * Contains NextEuropa\Phing\CheckStarterkitTask.
 */

namespace NextEuropa\Phing;

use GitWrapper\GitException;
use GitWrapper\GitWrapper;

require_once 'phing/Task.php';

/**
 * Phing task to check if the starterkit is updated to the latest version.
 */
class CheckStarterkitTask extends \Task {

  /**
   * The git wrapper.
   *
   * @var \GitWrapper\GitWrapper
   */
  protected $gitWrapper;

  /**
   * The path to the repository of the starterkit.
   *
   * @var string
   */
  protected $starterkitRepository;

  /**
   * The starterkit branch to check.
   *
   * @var string
   */
  protected $starterkitBranch;

  /**
   * The git remote of the starterkit.
   *
   * @var string
   */
  protected $starterkitRemote;

  /**
   * The git repository of the subsite.
   *
   * @var \GitWrapper\GitWorkingCopy
   */
  protected $subsiteRepository;

  /**
   * Pushes the deployment build to the temporary git repository.
   */
  public function main() {
    // Check if all required properties are present.
    $this->checkRequiredProperties();

    // Add the remote for the starterkit if it doesn't exist yet.
    $remote_branch = 'remotes/' . $this->starterkitRemote . '/' . $this->starterkitBranch;
    $remote_exists = $this->subsiteRepository->hasRemote($this->starterkitRemote);
    if (!$remote_exists) {
      $this->log('Adding remote repository.');
      // Only track the given branch, and don't download any tags.
      $options = [
        '--no-tags' => TRUE,
        '-t' => [$this->starterkitBranch],
      ];
      $this->subsiteRepository->addRemote($this->starterkitRemote, $this->starterkitRepository, $options);
    }

    // Check if the tracking branch exists and create it if it doesn't.
    try {
      $this->subsiteRepository->run(array('rev-parse', $remote_branch));
    }
    catch (GitException $e) {
      $this->log('Adding tracking branch.');
      $this->subsiteRepository->remote('set-branches', '--add', $this->starterkitRemote, $this->starterkitBranch);
    }

    // Fetch the latest changes.
    $this->log('Fetching latest changes.');
    $this->subsiteRepository->fetch($this->starterkitRemote);

    // Check if the latest commit on the remote is merged into the current
    // branch.
    $this->subsiteRepository->clearOutput();
    $latest_commit = (string) $this->subsiteRepository->run(array('rev-parse', $remote_branch));
    $merge_base = (string) $this->subsiteRepository->run(array('merge-base @ ' . $remote_branch));

    // If the latest commit on the remote is not merged into the current branch,
    // the repository is not up-to-date.
    if ($merge_base !== $latest_commit) {
      throw new \BuildException('The current branch is not up to date with the starterkit.');
    }

    $this->log('The starterkit is up to date.');
  }

  /**
   * Checks if all required properties are present.
   *
   * @throws \BuildException
   *   Thrown when a required property is not present.
   */
  protected function checkRequiredProperties() {
    $required_properties = [
      'starterkitBranch',
      'starterkitRemote',
      'starterkitRepository',
      'subsiteRepository',
    ];
    foreach ($required_properties as $required_property) {
      if (empty($this->$required_property)) {
        throw new \BuildException("Missing required property '$required_property'.");
      }
    }
  }

  /**
   * Returns the GitWrapper singleton.
   *
   * @return \GitWrapper\GitWrapper
   *   The git wrapper.
   */
  protected function getGitWrapper() {
    if (empty($this->gitWrapper)) {
      $this->gitWrapper = new GitWrapper();
    }
    return $this->gitWrapper;
  }

  /**
   * Sets the git repository of the starterkit.
   *
   * @param string $starterkitRepository
   *   The path to the git repository of the starterkit.
   */
  public function setStarterkitRepository($starterkitRepository) {
    $this->starterkitRepository = $starterkitRepository;
  }

  /**
   * Sets the git branch of the starterkit that will be checked.
   *
   * @param string $starterkitBranch
   *   The branch name.
   */
  public function setStarterkitBranch($starterkitBranch) {
    $this->starterkitBranch = $starterkitBranch;
  }

  /**
   * Sets the git remote of the starterkit.
   *
   * @param string $starterkitRemote
   *   The remote name.
   */
  public function setStarterkitRemote($starterkitRemote) {
    $this->starterkitRemote = $starterkitRemote;
  }

  /**
   * Sets the git repository of the subsite.
   *
   * @param string $subsiteRepository
   *   The path to the git repository of the subsite.
   */
  public function setSubsiteRepository($subsiteRepository) {
    $this->subsiteRepository = $this->getGitWrapper()->workingCopy($subsiteRepository);
  }

}
