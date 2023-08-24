#include "main.h"
#include <stdio.h>

/**
 *print_array- print inputted num of elements of array of integers.
 *@a: array of integers.
 *@n: number of elements.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ( i == n - 1)
			continue;

		printf(", ");
	}
	putchar('\n');
}
