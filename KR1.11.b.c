#include <stdio.h>

#define	IN 	1	/* inside a word */
#define OUT	0	/* outside a word */
/* word counting - improved definition of "word" */
/* count lines, words, and characters in input */
/* this code contains: 28	lines, 81 	words, and 649 	characters */

main()
{
	int	c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc  = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if ((state == OUT) && ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))) {
			state = IN;
			++nw;
		}
	}
	printf("Lines\tWords\tCharacters\n");
	printf("%d\t%d\t%d\nl", nl, nw, nc);
}