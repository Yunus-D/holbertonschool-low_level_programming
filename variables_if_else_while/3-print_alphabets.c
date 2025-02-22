#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 * followed by a newline. Only three calls to putchar are used.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;

	/* 1er appel à putchar dans la boucle pour l'alphabet minuscule */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* 2e appel à putchar dans la boucle pour l'alphabet majuscule */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	/* 3e appel à putchar pour le saut de ligne final */
	putchar('\n');

	return (0);
}
