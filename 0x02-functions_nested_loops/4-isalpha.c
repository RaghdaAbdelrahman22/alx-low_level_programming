#include "main.h"

/**
*_isalpha-checks for alaphabtic character.
*
* @c: character to check
*
* Return: 1 if character is alphabetic otherwise 0.
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
