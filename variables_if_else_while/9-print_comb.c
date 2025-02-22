#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * (0 to 9), separated by ", " and followed by a new line. Only four calls
 * to putchar can be used, and no variable of type char is allowed.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		/* 1ère ligne d’appel à putchar : affichage du chiffre */
		putchar(d + '0');

		if (d < 9)
		{
			/* 2ème ligne d’appel à putchar : ',' */
			putchar(',');
			/* 3ème ligne d’appel à putchar : ' ' */
			putchar(' ');
		}
	}

	/* 4ème ligne d’appel à putchar : saut de ligne final */
	putchar('\n');

	return (0);
}
