#!/bin/sh
ldapsearch -Q -LLL "uid=*bon*" dn | grep "dn" | wc -l | bc
