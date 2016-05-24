/**
 * @file
 * Theming adjustments.
 */

(function($) {

  // Actual window height.
  $(document).ready(function() {
    if ($('#block-tocify-tocify').length > 0) {
      var $altoRight = $('#content-wrapper').height();
      $('#sidebar-left').css('min-height', $altoRight);
      if ($('.region-sidebar-left').length > 0) {
        $('.region-sidebar-left').css('min-height', $altoRight);
      }
    }
  });

  // Left menu autoscroll.
  Drupal.behaviors.europaeu_themeLeftMenu = {
    attach: function(context, settings) {

      if ($('#block-tocify-tocify').length > 0) {

        $('#block-tocify-tocify:not(.scrolleable)').each(function() {

          var $this = $(this);
          var $altoForm = $('#block-tocify-tocify').outerHeight();

          $this.addClass('scrolleable');

        });
      }
    }
  };

  // Left menu autoscroll : call function.
  Drupal.behaviors.europaeu_themeLeftMenuDiv = {
    attach: function(context, settings) {

      if ($('#block-tocify-tocify').length > 0) {

        floatingMenu.add('block-tocify-tocify', {
          // Represents distance from left or right browser window
          // border depending upon property used. Only one should be
          // specified.
          // targetLeft: 0,
          // targetRight: 40,.
          prohibitXMovement: true,

          // Represents distance from top or bottom browser window
          // border depending upon property used. Only one should be
          // specified.
          targetTop: 0,
          // targetBottom: 0,.
          distance: .80,
          // Uncomment one of those if you need centering on
          // X- or Y- axis.
          // centerX: true,
          // centerY: true,.
          // Remove this one if you don't want snap effect.
          snap: false
        });

      }

    }
  };

  // Hide tabs when contains graphic.
  Drupal.behaviors.europaeu_themeGraphicTabs = {
    attach: function(context, settings) {

      $(window).resize(function() {
        if (this.resizeTO) {
          clearTimeout(this.resizeTO);
        }
        this.resizeTO = setTimeout(function() {
          $(this).trigger('resizeEnd');
        }, 0);
      });

      $(window).bind('resizeEnd', function() {
        var screenAvailWidth = window.screen.width;

        if (screenAvailWidth < 640) {

          if ($('.fusioncharts-container').length > 0) {

            $('.fusioncharts-container').each(function() {

              var $this = $(this);
              var $chartVisibility = $this.css('display');

              if ($chartVisibility == 'none') {
                $this.parents("dd").css("visibility", "hidden");
                $this.parents("dd").css("padding", "0");
              }

            });
          }
        }
        else {
          $('.fusioncharts-container').each(function() {

            var $this = $(this);
            var $chartVisibility = $this.css('display');

            if ($chartVisibility == 'block' || $chartVisibility == 'inline-block') {
              $this.parents("dd").css("visibility", "visible");
              $this.parents("dd").css("padding", "1em");
            }

          });

        }
      });
    }
  };

  // Left menu autoscroll : call function.
  Drupal.behaviors.europaeu_splashScreen = {
    attach: function(context, settings) {
      if ($('.no-csscolumns-width').length > 0) {
        $('body.page-splash #splash-block #block-system-main .item-list ul').columnize({
          width: 223
        });
      }
    }
  };

})(jQuery);
