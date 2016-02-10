/**
 * @file
 * Customise menu.
 */

(function($) {
  Drupal.behaviors.europaeu_menu = {
    attach: function(context, settings) {
      $(document).ready(function(){
        $('a.dropdown-toggle').unbind('click');

        $('ul.tb-megamenu-subnav.level-1 li.tb-megamenu-item.level-2')
          .removeClass('dropdown-submenu')
          .addClass('mega-group')
          .addClass('open');
        $('ul.tb-megamenu-subnav.level-1 li.tb-megamenu-item.level-2 div.tb-megamenu-submenu')
          .removeClass('dropdown-menu')
          .removeClass('mega-dropdown-menu')
          .addClass('mega-group-ct');

        $('ul.tb-megamenu-subnav.mega-nav.level-1').each(function() {
          $elements = $(this).find('li.tb-megamenu-item.level-2.mega.mega-group');
          var cols = $elements.length;
          cols = (12 / cols) < 3 ? 3 : (12 / cols);
          $elements.addClass('span' + cols);

          var counter = 0;
          $elements.each(function(){
            if ((++counter % 5) == 0) {
              $(this).addClass('clear-left');
              counter = 1;
            }
          });
        });
        $('ul.tb-megamenu-nav.nav.level-0 li.tb-megamenu-item.level-1.mega.dropdown')
          .addClass('mega-align-justify');
      });
    }
  };
})(jQuery);
