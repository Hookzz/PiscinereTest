cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | awk 'NR <= '$FT_LINE2' && NR >= '$FT_LINE1'' | tr '\n' ',' | sed -e 's/,/, /g' -e 's/, $/./' | tr -d "\n"
