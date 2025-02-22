#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase, a newline.
 * Only three calls to putchar are used in the code.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	/* 1er appel à putchar dans la boucle pour les chiffres 0-9 */
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	/* 2e appel à putchar dans la boucle pour les lettres a-f */
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	/* 3e appel à putchar pour le saut de ligne final */
	putchar('\n');

	return (0);
}
