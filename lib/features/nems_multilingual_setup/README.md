# Exporting and importing translations with NEMS

The nems_multilingual_setup feature provides tools to export and import translations of strings provided by modules¡.

# Exporting translations.

In order to export the translatable strings from a module the following steps must be taken:
- Create a folder labeled "translations" in the root folder of the module (eg.: my_module/translations).
- Create a json file inside the "translations" folder called "translations.json" (eg.: my_module/translations/translations.json).
- Define all the strings to be translated in the json following the following format:

```
{
  "text_group": [
    "context",
  ]
}
```
  For example, a json to export the translations of the "body" field label.

```
{
  #Text group
  "field": [
    # Context
    " body:article:label",
  ]
}

- Export the .po files using the drush export-po-translations command (eg.: drush epo my_module).

Once completed, a single .po file will be created inside the translations folder for each text group and language available in the site.


# Importing translations translations.

Any module that provides the generated the translation .po files through the export command can then import the translations back using the drush import-po-translations command

- Eg.: drush ipo my_module
