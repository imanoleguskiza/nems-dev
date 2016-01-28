/**
 * @file
 * Custom javascript for the nems_core feature.
 */

(function ($) {
  $(document).ready(function() {
    $('#-nems-admin-menu-edit tr').each(function() {
      $(this).find('td:last').addClass('tabledrag-hide');
      $(this).find('th:last').addClass('tabledrag-hide');
    });

    $('#-nems-admin-menu-edit input[type=text]').each(function() {
      $(this).attr('disabled', 'disabled');
      $(this).before('<span class="nems-edit">' + Drupal.t('Click me to edit!') + '</span>');
    });

    $('span.nems-edit').click(function() {
      if (!$(this).next().attr('disabled')) {
        $(this).next().attr('disabled', 'disabled');
        $(this).removeClass('nems-editable');
        $(this).text(Drupal.t('Click me to edit!'));
      }
      else {
        $(this).next().removeAttr('disabled');
        $(this).text(Drupal.t('You can edit this field'));
        $(this).addClass('nems-editable');
      }
    });
  });
})(jQuery);
