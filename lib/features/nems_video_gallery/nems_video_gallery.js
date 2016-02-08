/**
 * @file
 * nems_video_gallery.js
 */

(function($){
    Drupal.behaviors.nems_video_gallery = {
        attach: function(context) {
            $(document).ready(function (){

                $('.video-thumbnail').each(function(){
                    var image_src = $(this).find('img').attr('src');
                    var video = $(this).siblings('.views-field-field-video-items').find('video');
                  if (video.length > 0 && image_src != '') {
                      video.attr('poster', image_src);
                  }
                });

                var owl = $(".view-nems-video-gallery .owl-carousel");
                var last_slide = $('.view-id-nems_video_gallery .owl-item').length > 0
                    ? $('.view-id-nems_video_gallery .owl-item').length - 1
                    : 0;
                if (owl.length > 0) {
                    owl.data('owlCarousel').reinit({
                        afterAction:  function(element) {
                            $('.navPlayerInfo').html(this.currentItem + 1 + '<i>/</i>' + this.itemsAmount);
                        }
                    });
                }
                $('.navPlayer a.next').once('nems_video_gallery', function () {
                    $(this).on("click", function (event) {
                        event.preventDefault();
                        owl.trigger('owl.next');
                    });
                });
                $('.navPlayer a.prev').once('nems_video_gallery', function () {
                    $(this).on("click", function (event) {
                        event.preventDefault();
                        owl.trigger('owl.prev');
                    });
                });
                $('.navPlayer a.first').once('nems_video_gallery', function () {
                    $(this).on("click", function (event) {
                        event.preventDefault();
                        owl.trigger('owl.goTo', 0);
                    });
                });
                $('.navPlayer a.end').once('nems_video_gallery', function () {
                    $(this).on("click", function (event) {
                        event.preventDefault();
                        owl.trigger('owl.goTo', last_slide);
                    });
                });
            });
        }
  }
})(jQuery);
