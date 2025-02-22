#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase (a-z), followed by a newline,
 * using only two calls to putchar in the entire code.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;

	/* 1ère utilisation de putchar (dans la boucle for) */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* 2ème utilisation de putchar pour le saut de ligne */
	putchar('\n');

	return (0);
}
