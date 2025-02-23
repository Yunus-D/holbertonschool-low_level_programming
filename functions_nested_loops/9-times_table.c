#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description:
 *	The table is formatted de la façon suivante :
 *	    0,  0,  0,  0,  ...
 *	    0,  1,  2,  3,  ...
 *	etc.
 */
void	times_table(void)
{
	int	i;
	int	j;
	int	product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			/* Si on n’est pas en première colonne, on affiche ", " */
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Si le produit est un chiffre < 10, on ajoute un espace */
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				/* Deux chiffres */
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
