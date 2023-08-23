#include "main.h"
#include <stdio.h>

/**
 *rev_string- reverses string.
 *@s: string reversed.
 */

void rev_string(char *s)
{
	char tmp;
	int l = 0, i = 0;

	while (s[i++])
		l++;

	for (l = i - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
