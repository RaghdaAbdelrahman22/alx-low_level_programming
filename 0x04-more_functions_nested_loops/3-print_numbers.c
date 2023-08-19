#include "main.h"

/**
 *print_numbers- prints numbers 0 to 9, followed by newline.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar((x % 10) + '0');

	_putchar('\n');
}
