#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except for 'q' and 'e',
 * followed by a new line. Only two calls to putchar are used in the code.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;

	/* Premier appel à putchar dans la boucle */
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	/* Deuxième appel à putchar pour le saut de ligne */
	putchar('\n');

	return (0);
}
