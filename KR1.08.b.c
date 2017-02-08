#include <stdio.h>

/* count blanks (" "), tabs (\t), and newlines (\n) */

main()
    {
        int c, nb, nt, nl;

        nb = nt = nl = 0;
        while ((c = getchar()) != EOF)
            if (c == ' ')
                ++nb;
            else if (c == '\t')
                ++nt;
            else if (c == '\n')
                ++nl;
        printf("Blank spaces\t%d\n", nb);
        printf("New tabs\t%d\n", nt);       /* fails to count new tabs (\t) */
        printf("New lines\t%d\n", nl);
    }