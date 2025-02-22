#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * using only putchar (twice) and no char variable.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int d;

	/* 1er appel à putchar, dans la boucle, pour chaque chiffre */
	for (d = 0; d < 10; d++)
		putchar(d + '0');

	/* 2e appel à putchar, pour le saut de ligne final */
	putchar('\n');

	return (0);
}
