#!/bin/sh
cat $1 | grep -i nicolas | grep -i bauer | grep -E -o '\(\d\d\d\)\d\d\d-\d\d\d\d'
