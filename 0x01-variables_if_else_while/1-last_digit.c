#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 > 5)
		printf("Last digit of", n, "is", n%10, "and is greater than 5");
	else if (n%10 == 0)
		printf("Last digit of", n, "is", n%10, "and is 0");
	else 
		printf("Last digit of", n, "is", n%10, "and is less than 6 and not 0");
	return (0);
}
