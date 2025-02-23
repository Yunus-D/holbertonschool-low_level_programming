#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, and a new line
 *
 * Description: Uses a for loop to print characters 'a' through 'z',
 * then prints a newline character.
 * `_putchar` is used exactly twice in the code.
 */
void print_alphabet(void)
{
	char c;

	/* 1er appel à _putchar (dans la boucle for) */
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	/* 2e appel à _putchar pour le saut de ligne */
	_putchar('\n');
}
