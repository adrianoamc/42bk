#!/bin/sh
cut -d':' -s -f1  /etc/passwd | grep -v '^#' | awk '(NR+1) % 2'| rev | sort -r | awk 'NR=='$FT_LINE1', NR=='$FT_LINE2' {print$0}' |tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g'
