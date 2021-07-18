cat /etc/passwd | awk 'sub(/:.*/, "")' | awk 'NR%2==1' | rev | sort -r | awk -v b=$FT_LINE 1 -v e=$FT_LINE2
'NR>=b&&NR<=e' | awk '{ORS=", "} {print} | sed 's/., $/./g' | tr -d "\n" 
