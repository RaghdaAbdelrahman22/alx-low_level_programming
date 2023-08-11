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
printf(&n, "is positive\n");
}
else
{
	if (n < 0)
	{
	printf(&n, "is negative\n");
	}
	else
	{
	printf(&n, "is zero\n");
	}
}
return (0);
}
