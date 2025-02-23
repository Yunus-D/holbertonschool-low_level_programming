#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Description: Prints '+' and returns 1 if n > 0,
 * prints '0' and returns 0 if n == 0,
 * prints '-' and returns -1 if n < 0.
 *
 * Return: 1 if n > 0, 0 if n == 0, or -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
