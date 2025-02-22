#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse (z-a), followed by
 * a new line, using only two calls to putchar.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	/* Premier appel à putchar dans la boucle (exécutée plusieurs fois) */
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	/* Deuxième appel à putchar pour le saut de ligne */
	putchar('\n');

	return (0);
}
