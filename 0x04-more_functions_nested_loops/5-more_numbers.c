#include "main.h"

/**
 * more_numbers-prints 10 times numbers from 0 to 14 then newline.
 *
 */

void more_numbers(void)
{
	int num, prod;

	for (prod = 0; prod <= 9; prod++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
