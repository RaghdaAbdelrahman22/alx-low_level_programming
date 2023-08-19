#include "main.h"

/**
 * print_line- draws a straight line in the terminal.
 * @n: number of _ characters to print.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len <= n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
