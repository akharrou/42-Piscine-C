#!/bin/sh
find . \( -type f -or -type d \) | wc -l | bc
