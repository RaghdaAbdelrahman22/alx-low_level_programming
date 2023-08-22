#include "main.h"
#include <stdio.h>

/**
 *print_rev-print sting in reverse and newline.
 *@s: string printed in reverse.
 */

void print_rev(char *s)
{
	int l = 0;
	while (s[l])
		l++;
	while(l--)
		putchar(s[l]);

	putchar('\n');
}
