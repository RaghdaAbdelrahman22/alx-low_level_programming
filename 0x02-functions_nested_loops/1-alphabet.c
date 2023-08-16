#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 *Describtion: print_alphabet - prints lowercase alphabet ended by new line.
 *
 * Return: Always 0.
 */

	void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			putchar(c);

		putchar('\n');
	print_alphabet();
	return (0);
	}
