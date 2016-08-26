#!/bin/sh

# Symlink the git pre-push hook to its destination.
if [ ! -h ".git/hooks/pre-push" ] ; then
  ln -s "../../vendor/pfrenssen/phpcs-pre-push/pre-push" ".git/hooks/pre-push"
fi

# Symlink the quality assurance task to its destination.
if [ ! -h "src/Phing/QualityAssuranceTask.php" ] ; then
  ln -s "../../vendor/ec-europa/qa-automation/QualityAssuranceTask.php" "src/Phing/QualityAssuranceTask.php"
fi

