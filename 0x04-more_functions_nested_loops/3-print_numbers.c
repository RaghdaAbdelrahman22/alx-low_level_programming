#include <stdio.h>

/**
 *print_numbers- prints numbers 0:9, followed by newline.
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	putchar('\n');
}
