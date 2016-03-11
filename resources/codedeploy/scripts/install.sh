#!/bin/bash

# Install curl. This is needed for the `chr` module.
# Todo: add this to the machine image instead.
apt-get install php5-curl -qq

cd /var/www/html

while [ ! -f /usr/local/etc/subsite/subsite.ini ]
do
  sleep 2
done

bin/phing -propertyfile /usr/local/etc/subsite/subsite.ini install >> /var/log/subsite/install.log 2>&1
chown -R www-data:www-data /var/www/html/*
