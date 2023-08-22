#include "main.h"
#include <stdio.h>

/**
 * _puts- prints a string, followed by a new line, to stdout.
 *@str: string printed.
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
