#include "main.h"

/**
*print_to_98-prints all natural numbers from n to 98.
*@n: first number.
*/

void print_to_98(int n)
{
if (n >= 98)
{
	do
		n--;
	while (n > 98)
		_putchar(("%d") + ' ');
_putchar(("%d\n"), n);
}
else
{
	do
		n++;
	while (n < 98)
		_putchar(("%d") + ' ');
_putchar(("%d\n"), n);
}
}
