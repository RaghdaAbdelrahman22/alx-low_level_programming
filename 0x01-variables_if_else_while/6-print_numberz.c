#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
for (x = 0; x <= 9; x++)
	putchar((x % 10) + '0');
putchar('\n');
	return (0);
}
