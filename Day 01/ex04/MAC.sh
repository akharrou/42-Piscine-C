#!/bin/sh
ifconfig | grep "ether" | cut -c8- | grep "^\d"
