#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description:
 *	Avoids having an extra space before the first number
 *	of each line, matching exactly the output format.
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

			/* Si on n’est pas dans la première colonne,
			   on affiche ", " pour séparer */
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/*
			 * Gestion de l'alignement :
			 * Si product < 10, on ajoute un espace avant le chiffre
			 * (sauf s'il est dans la toute première colonne, alors on n’ajoute
			 *  que l’espace prévu ci-dessus quand j>0).
			 */
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
