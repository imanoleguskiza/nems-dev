api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[block_access][subdir] = "contrib"
projects[block_access][version] = 1.6

projects[collapsiblock][subdir] = "contrib"
projects[collapsiblock][version] = 1.1

projects[ckeditor_tabber][subdir] = "contrib"
projects[ckeditor_tabber][version] = 1.3

projects[entityconnect][subdir] = "contrib"
projects[entityconnect][version] = 1.0-rc5

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = 1.0

projects[features_roles_permissions][subdir] = "contrib"
projects[features_roles_permissions][version] = 1.2

projects[feeds_et][subdir] = "contrib"
projects[feeds_et][version] = 1.x-dev
projects[feeds_et][patch][] = "https://www.drupal.org/files/feeds_et_link_support-2078069-1.patch"

projects[media_feeds][subdir] = "contrib"
projects[media_feeds][version] = 2.x-dev

projects[feeds_xpathparser][subdir] = "contrib"
projects[feeds_xpathparser][version] = 1.1

projects[owlcarousel][subdir] = "contrib"
projects[owlcarousel][version] = 1.5

projects[insert_block][subdir] = "contrib"
projects[insert_block][version] = 1.x-dev
projects[insert_block][patch][] = "https://www.drupal.org/files/1873624-insert_block-undefined-index-warnings.patch"

projects[integration][subdir] = "contrib"
projects[integration][version] = 1.x-dev

projects[page_title][subdir] = "contrib"
projects[page_title][version] = 2.7

projects[menu_admin_per_menu][subdir] = "contrib"
projects[menu_admin_per_menu][version] = 1.1

projects[owlcarousel][subdir] = "contrib"
projects[owlcarousel][version] = 1.5

projects[pathologic][subdir] = "contrib"
projects[pathologic][version] = 3.1

projects[rabbit_hole][subdir] = "contrib"
projects[rabbit_hole][version] = 2.23

projects[remote_stream_wrapper][subdir] = "contrib"
projects[remote_stream_wrapper][version] = 1.0-rc1

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = 1.1

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = 1.5

projects[taxonomy_access_fix][subdir] = "contrib"
projects[taxonomy_access_fix][version] = 2.3

projects[text_with_summary][subdir] = "contrib"
projects[text_with_summary][version] = 1.0

projects[tb_megamenu][subdir] = "contrib"
projects[tb_megamenu][version] = 1.0-rc2

projects[tocify][subdir] = "contrib"
projects[tocify][version] = 1.0

projects[views_block_filter_block][subdir] = "contrib"
projects[views_block_filter_block][version] = 1.0-beta2

projects[weight][subdir] = "contrib"
projects[weight][version] = 3.1
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
