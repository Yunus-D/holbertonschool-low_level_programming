#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Description:
 *	If n <= 0, this function simply prints a newline.
 *	Otherwise, it prints n rows:
 *	  - row i (0-based) contains i spaces, then a '\',
 *	    then a newline.
 */
void	print_diagonal(int n)
{
	int	row;
	int	space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
