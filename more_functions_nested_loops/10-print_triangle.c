#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size (height) of the triangle
 *
 * Description:
 *	If size <= 0, this function prints only a newline.
 *	Otherwise, each row i (1-based) has (size - i) spaces,
 *	followed by i '#', then a newline.
 *	We only use _putchar for output.
 */
void	print_triangle(int size)
{
	int	row;
	int	space;
	int	hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* (size - row) spaces */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* row '#' characters */
		for (hash = 0; hash < row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
