api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[boxes][subdir] = "contrib"
projects[boxes][version] = 1.2

projects[i18n_boxes][subdir] = "contrib"
projects[i18n_boxes][version] = 1.0

projects[fancybox][subdir] = "contrib"
projects[fancybox][version] = 2.0-beta6

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = 1.0

projects[owlcarousel][subdir] = "contrib"
projects[owlcarousel][version] = 1.5

projects[menu_admin_per_menu][subdir] = "contrib"
projects[menu_admin_per_menu][version] = 1.1

projects[remote_stream_wrapper][subdir] = "contrib"
projects[remote_stream_wrapper][version] = 1.0-rc1

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = 1.5

projects[taxonomy_access_fix][subdir] = "contrib"
projects[taxonomy_access_fix][version] = 2.3

projects[pathologic][subdir] = "contrib"
projects[pathologic][version] = 3.1

projects[collapsiblock][subdir] = "contrib"
projects[collapsiblock][version] = 1.1

projects[ckeditor_tabber][subdir] = "contrib"
projects[ckeditor_tabber][version] = 1.3

projects[integration][subdir] = "contrib"
projects[integration][version] = 1.x-dev

projects[tocify][subdir] = "contrib"
projects[tocify][version] = 1.0

projects[tb_megamenu][subdir] = "contrib"
projects[tb_megamenu][version] = 1.0-rc2

projects[insert_block][subdir] = "contrib"
projects[insert_block][version] = 1.x-dev
projects[insert_block][patch][] = "https://www.drupal.org/files/1873624-insert_block-undefined-index-warnings.patch"

; =========
; Libraries
; =========

libraries[fancybox][destination] = libraries
libraries[fancybox][directory_name] = "fancybox"
libraries[fancybox][download][type] = git
libraries[fancybox][download][tag] = 'v2.1.5'
libraries[fancybox][download][url] = "https://github.com/fancyapps/fancyBox.git"

libraries[owlcarousel][destination] = libraries
libraries[owlcarousel][directory_name] = "owl-carousel"
libraries[owlcarousel][download][subtree] = "owl-carousel"
libraries[owlcarousel][download][type] = file
libraries[owlcarousel][download][url] = "http://owlgraphic.com/owlcarousel/owl.carousel.zip"

; ======
; Themes
; ======
