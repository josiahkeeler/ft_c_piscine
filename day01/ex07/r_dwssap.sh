#!/bin/bash
#jkeeler 
cat /etc/passwd | grep -o '^_.*:\*' | tr -d ':*' | sed -n 'p;n' | rev | sort -r | awk 'NR>=ENVIRON["FT_LINE1"]&&NR<=ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/,/,\ /g' | sed 's/,\ $/./' 
