#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
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

			/* Si on n’est pas dans la première colonne (j > 0), afficher la virgule et l'espace */
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Vérifie si product < 10, afin d'aligner sur 2 colonnes (un espace en plus) */
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
