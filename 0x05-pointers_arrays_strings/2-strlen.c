#include "main.h"
#include <stdio.h>

/**
 * _strlen-return length of string.
 *@s: string counted.
 *Return: length of string @s.
 */

int _strlen(char *s)
{
	int length;
	
	for (length  = 0; *s != '\0'; s++)
		++length;
	return (length);
}
