#include "main.h"

/**
* print_alphabet_x10- prints 10 times lowercase alphabet-new line.
*
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i++  < 10)
	{
		for (c = 'a'; c = 'z'; c++)
			putchar(c);
		putchar('\n');
	}
}
