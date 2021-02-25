static char *copyurl[] = { "/bin/sh", "-c",
	"echo 'X' | grep -Pq 'X' && grepflags='-Po' || grepflags='-Eo';"
	"urlregex='(((http|https|ftp|gopher)|mailto)[.:][^ >\"\\t]*|www\\.[-a-z0-9.]+)[^ .,;\\t>\">\\):]';"
	"urls=\"$(sed 's/.*│//g' | tr -d '\n' | grep $grepflags \"$urlregex\")\";"

	"[ -z \"$urls\" ] && exit;"
	"echo \"$urls\" | awk '!seen[$0]++' | dmenu -l 10 | xclip -sel clipboard",
	"externalpipe", NULL };

/* vim: ft=c
 */
