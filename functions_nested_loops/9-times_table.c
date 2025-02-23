#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Prints the 9 times table formatted as follows:
 *	0,  0,  0,  0,  0,  0,  0,  0,  0,  0
 *	0,  1,  2,  3,  4,  5,  6,  7,  8,  9
 *	0,  2,  4,  6,  8, 10, 12, 14, 16, 18
 *	0,  3,  6,  9, 12, 15, 18, 21, 24, 27
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
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
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
