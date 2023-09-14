#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: input integer array.
 * @size: size of array.
 * @cmp: pointer to function to compare values.
 *
 * Return: index of first element for which cmp
 * function does not return 0. 
 * If no elements matches,return -1. 
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
 
	if (array && cmp && cmp)
	{
		while (i < size )
			if (cmp(array[i]))
				return (i);
			i++;
	}

	return (-1);
}
