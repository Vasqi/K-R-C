#include <stdio.h>

/* print input one word per line to output and output should match number of lines from count output of comand : $ wc -w */

main()
{
	char	c;

	while ((c = getchar()) != EOF) {
		if (c == '-' || c == '_' || c == ':' || c == '$' || c == '*' || c == '/' || c == '(' || c == ')' || c == '{' || c == '}' || c == '\n' || c == '\t' || c == '=' || c == ' ' || c == '.') {
			putchar(' ');
		}
		if (c == ' ' || c == '\n' || c == '\t' ) {
				putchar('\n');
		}
		else if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')) {
			putchar(c);	
		}
	}
	c = getchar();
}
