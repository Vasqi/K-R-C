#include <stdio.h>

/* verify "!= EOF" value = 1 or 0 */

static int x= 1, y= 2;
int main( void ) {
    printf( "%d %d\n", x < y, x >= y );
    return 0;
} 