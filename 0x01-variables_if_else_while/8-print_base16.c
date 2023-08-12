#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char x;
for (i = 0; i <= 9; i++)
	putchar((i % 10) + '0');
for (x = 'a'; x <= 'f'; i++)
	putchar(x);
putchar('\n');
	return (0);
}
