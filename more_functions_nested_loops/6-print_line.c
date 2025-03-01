#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character '_' is printed
 *
 * Description:
 *	If n is 0 or less, only a newline is printed.
 *	Otherwise, print '_' n times, then a newline.
 *	Uses only _putchar for output.
 */
void	print_line(int n)
{
	int	i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
