#include <stdio.h>

/* The following two lines are the same length. */
/*  /    /   /  / /  /       /          /       */
/*..............................................*/

main()
{
	int c;
	while ((c = getchar()) != EOF) {
    	if (c == ' ') {
       	 while ((c = getchar()) == ' ');
        	putchar(' ');
        	if (c == EOF) break;
    	}
    	putchar(c);
	}
}