#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
{
printf(n, "is positive");
}
else
{
	if (n < 0)
	{
	printf(n, "is negative");
	}
	else
	{
	printf(n, "is zero");
	}
}
return (0);
}
