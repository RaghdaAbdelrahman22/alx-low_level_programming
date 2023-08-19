#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci, starting with
 *        1 and 2, separated by a comma then space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1_1, num1_2, num2_1, num2_2;
	unsigned long n1, n2;

	for (count = 0; count < 92; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

		num1 = num2;
		num2 = sum;
	}

	num1_1 = num1 / 10000000000;
	num2_1 = num2 / 10000000000;
	num1_2 = num1 % 10000000000;
	num2_2 = num2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		n1 = num1_1 + num2_1;
		n2 = num1_2 + num2_2;
		if (num1_2 + num2_2 > 9999999999)
		{
			n1 += 1;
			n2 %= 10000000000;
		}

		printf("%lu%lu", n1, n2);
		if (count != 98)
			printf(", ");

		num1_1 = num2_1;
		num1_2 = num2_2;
		num2_1 = n1;
		num2_2 = n2;
	}
	printf("\n");
	return (0);
}
