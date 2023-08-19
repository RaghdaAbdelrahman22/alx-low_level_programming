#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma and space.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int num1 = 0, num2 = 1, sum;
	int cntr;

	for (cntr = 0; cntr < 50; cntr++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (cntr == 49)
			putchar('\n');
		else
			putchar(',');
	}
	return (0);
}
