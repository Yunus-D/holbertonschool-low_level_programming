#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase,
 * each time followed by a newline
 *
 * Description: Only two calls to _putchar in the source code:
 * one in the nested loop for letters, and one for the newline.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		/* 1er appel à _putchar (dans la boucle for) */
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		/* 2e appel à _putchar pour le saut de ligne */
		_putchar('\n');
	}
}
