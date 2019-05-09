#!/bin/sh
ldapsearch -Q -LLL "(uid=z*)" cn | grep "^cn" | cut -c5- | sort -r
