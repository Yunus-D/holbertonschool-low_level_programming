#include "main.h"

/**
 * print_square - prints a square using the '#' character
 * @size: the size of the square (length and width)
 *
 * Description:
 *	If size <= 0, print only a newline.
 *	Otherwise, print 'size' rows, each containing 'size' '#' characters.
 *	We use only _putchar to output characters.
 */
void	print_square(int size)
{
	int	row;
	int	col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
