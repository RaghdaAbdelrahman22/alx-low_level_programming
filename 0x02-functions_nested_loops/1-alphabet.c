#include "main.h"
#include <stdio.h>

/**
 *Describtion: print_alphabet - prints lowercase alphabet ended by new line.
 *
 */

	void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			putchar(c);

		putchar('\n');
	print_alphabet();
	}
