/**
 * @file
 * Legacy file to support old accordions.
 */

(function ($) {

  eu_toggler = $.widget('custom.toggler', {

    options: {
      toggler_element: 'h3',
      toggled_element: 'div.content',
      init_as: 'close',
      delay: 1000,
      onStart: function () {
      },
      onComplete: function () {
      },
      onOpen: function () {
      },
      onClose: function () {
      }
    },

    // Private method.
    _create: function () {

      toggler_obj = this;

      toggler_obj.element.find(toggler_obj.options.toggled_element).each(function (index, element) {

        real_height = toggler_obj._real_height($(this));
        $(this).data('height', real_height).addClass('open');
        $(this).css({'overflow': 'hidden'});

        if (toggler_obj.options.init_as == 'close') {
          $(this).css({'height': 0});
          $(this).removeClass('open');
          $(this).addClass('close');
        }

      });

        this._events(this);
    },

    _real_height: function (element) {
      element.css('height', 'auto');
      return element.height();
    },

    _events: function (item) {
      item.element.find(item.options.toggler_element).bind('click', function (e) {
        height_to_reach = 0;
        class_to_add = 'close';
        callback_function = 'onClose';

        if (item.element.find(item.options.toggled_element).hasClass('close')) {
          height_to_reach = item.element.find(item.options.toggled_element).data('height');
          class_to_add = 'open';
          callback_function = 'onOpen';

          real_height = item._real_height(item.element);
          $(this).data('height', real_height);
        }

        item.options.onStart(e, item, class_to_add);
        item.element.find(item.options.toggled_element).stop().animate({'height': height_to_reach}, item.options.delay, function () {

          $(this).toggleClass('open');
          $(this).toggleClass('close');
          eval('item.options.' + callback_function + '(e, item, class_to_add)');
          item.options.onComplete(e, item, class_to_add);

          item._events(item);
        });

        return false;
      })

    },

    _destroy: function () {
      this.element.find(this.options.toggled_element).css({'overflow': 'visible', 'height': 'auto'})
    },

    close: function () {
      if (this.element.find(this.options.toggled_element).hasClass('open')) {
        this.element.find(this.options.toggled_element).css('height', 0);
        this.element.find(this.options.toggled_element).toggleClass('open');
        this.element.find(this.options.toggled_element).toggleClass('close');
      }
    }

  });

})(jQuery);
