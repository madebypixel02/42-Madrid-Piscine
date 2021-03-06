cat /etc/passwd | grep -v "#" | awk -F : '{print $1}' | awk 'NR%2==0' | rev | sort -r | awk NR==$FT_LINE1,NR==$FT_LINE2 | xargs echo | awk 'gsub(" ", ", ")' | cat -e | tr "$" "." | tr -d "\n"
