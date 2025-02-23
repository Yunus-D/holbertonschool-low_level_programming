#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description:
 *	Prints the 9 times table in a formatted way, from 0 to 9.
 *	Each value is separated by a comma and a space.
 *	The first number on each line is printed without a leading space.
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
			if (j == 0)
			{
				/* Pour la première colonne, on n'affiche pas de virgule ni d'espace */
				if (product < 10)
					_putchar(product + '0');
				else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				/* Colonnes suivantes, on ajoute un espace si le produit est un chiffre */
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
		}
		_putchar('\n');
	}
}
