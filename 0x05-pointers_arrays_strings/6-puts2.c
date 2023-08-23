#include "main.h"
#include <stdio.h>
/**
 *puts2- prints every character of a string followed by newline.
 *@str: string printed.
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i++])
		l++;
	for (i = 0; i < l; i += 2) 
		putchar(str[i]);

	putchar('\n');
}

