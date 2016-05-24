<?php
/**
 * @file
 * Tb-megamenu.tpl.php.
 */
?>
<div <?php print $attributes;?> class="<?php print $classes;?>">
<?php
  print l(t('Home'), '',
  array(
    'attributes' =>
    array(
      'class' =>
      array(
        'btn',
        'btn-navbar',
        'tb-megamenu-button',
        'home-buttom',
      ),
    ),
    'html' => TRUE,
  )
); ?>
    <button data-target=".nav-collapse-menu" data-toggle="collapse" class="btn btn-navbar tb-megamenu-button" type="button">
      <?php print t("Menu") ?>
    </button>
    <button data-target=".nav-collapse-search" data-toggle="collapse" class="btn btn-navbar tb-megamenu-button" type="button">
      <?php print t("Search") ?>
    </button>
    <div class="nav-collapse nav-collapse-menu <?php print $block_config['always-show-submenu'] ? 'always-show' : '';?>">
      <?php print $content;?>
    </div>
    <div class="nav-collapse nav-collapse-search collapse<?php print $block_config['always-show-submenu'] ? ' always-show' : '';?>">
      <?php print $search_block;?>
    </div>
</div>
