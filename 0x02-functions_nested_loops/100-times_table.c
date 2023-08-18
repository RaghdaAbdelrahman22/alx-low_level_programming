#include "main.h"

/**
 * print_times_table- prints times table of input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
int i, j, prod;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 0; j <= n; j++)
			{
				putchar(',');
				putchar(' ');
				prod = i * j;
				if (prod <= 9)
					putchar(' ');
				if (prod <= 99)
					putchar(' ');
				if (prod >= 100)
				{
					putchar(prod / 100 + '0');
					putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					putchar((prod / 10) + '0');
				}
				putchar((prod % 10) + '0');
			}

			putchar('\n');
		}
	}
}