/**
 * @file
 * Theming adjustments.
 */

(function($) {

  Drupal.behaviors.europaeu_splashscreen = {
    attach: function(context, settings) {
      $(document).ready(function(){

        var splashscreen = {
          'bg' : {
            'text1':  'Официален уебсайт на Европейския съюз -',
            'text2':  'Моля, изберете език.'
          },
          'cs' : {
            'text1':  'Oficiální internetové stránky Evropské unie -',
            'text2':  'výběr jazyka'
          },
          'da' : {
            'text1':  'Den Europæiske Unions officielle websted -',
            'text2':  'Vælg sprog'
          },
          'de' : {
            'text1':  'Offizielle Website der Europäischen Union -',
            'text2':  'Bitte wählen Sie eine Sprache'
          },
          'et' : {
            'text1':  'Euroopa Liidu ametlik veebisait -',
            'text2':  'Valige palun keel'
          },
          'el' : {
            'text1':  'Επίσημος ιστότοπος της Ευρωπαϊκής Ένωσης -',
            'text2':  'Επιλέξτε γλώσσα'
          },
          'en' : {
            'text1':  'Official website of the European Union -',
            'text2':  'Please choose a language'
          },
          'es' : {
            'text1':  'Web oficial de la Unión Europea -',
            'text2':  'Elija una lengua'
          },
          'fr' : {
            'text1':  'Site web officiel de l\'Union européenne -',
            'text2':  'Veuillez choisir une langue'
          },
          'ga' : {
            'text1':  'Suíomh gréasáin oifigiúil an Aontais Eorpaigh -',
            'text2':  'Roghnaigh teanga, le do thoil'
          },
          'hr' : {
            'text1':  'Službene web-stranice Europske unije –',
            'text2':  'Odaberite jezik'
          },
          'it' : {
            'text1': 'Sito ufficiale dell\'Unione europea -',
            'text2': 'Scegli una lingua'
          },
          'lt' : {
            'text1': 'Oficiali Europos Sąjungos interneto svetainė -',
            'text2': 'Pasirinkite kalbą'
          },
          'lv' : {
            'text1': 'Eiropas Savienības oficiālā tīmekļa vietne -',
            'text2': 'lūdzu, izvēlieties valodu'
          },
          'hu' : {
            'text1': 'Az Európai Unió hivatalos honlapja -',
            'text2': 'Válasszon nyelvet!'
          },
          'mt' : {
            'text1': 'Websajt uffiċjali tal-Unjoni Ewropea -',
            'text2': 'Jekk jogħġbok agħżel il-lingwa'
          },
          'nl' : {
            'text1': 'Officiële website van de Europese Unie -',
            'text2': 'Kies uw taal'
          },
          'pl' : {
            'text1': 'Oficjalny portal Unii Europejskiej -',
            'text2': 'Proszę wybrać język'
          },
          'pt' : {
            'text1': 'Sítio Web oficial da União Europeia -',
            'text2': 'Escolha uma língua'
          },
          'ro' : {
            'text1': 'Site-ul oficial al Uniunii Europene -',
            'text2': 'Selectaţi limba'
          },
          'sk' : {
            'text1': 'Oficiálna webová lokalita Európskej únie -',
            'text2': 'Výber jazyka'
          },
          'sl' : {
            'text1': 'Uradno spletišče Evropske unije -',
            'text2': 'Izberite jezik'
          },
          'fi' : {
            'text1': 'EU:n virallinen verkkosivusto -',
            'text2': 'Valitse kieli'
          },
          'sv' : {
            'text1': 'Officiell EU-webbplats -',
            'text2': 'vänligen välj språk'
          }
        };

        $('.site-level-language-selector div ul li a').hover(function (event) {
          var cur_lang = $(this).attr('lang');
          $('#welcome_message h1 span.text1').html(splashscreen[cur_lang].text1);
          $('#welcome_message h1 span.text2').html(splashscreen[cur_lang].text2);
        });
      });
    }
  };

})(jQuery);
