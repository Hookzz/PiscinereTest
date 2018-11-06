ldapsearch -xLLL "sn=*bon*"| grep sn: | wc -l | cut -d : -f 2 | tr -d " " 
