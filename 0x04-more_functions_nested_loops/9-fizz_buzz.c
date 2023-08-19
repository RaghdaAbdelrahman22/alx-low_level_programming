#include <stdio.h>

/**
 * main - Prints numbers from 1-100, but multiples of 3 print Fizz,
 *        for multiples of 5 Buzz, for multiples of 3 and 5 FizzBuzz.
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (i == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
