#include "main.h"

/**
 * print_most_numbers - prints the digits from 0 to 9 except 2 and 4,
 * followed by a new line
 *
 * Description:
 *	This function loops through the characters '0' to '9'.
 *	If the digit is '2' or '4', it is skipped.
 *	We only call _putchar twice in the source code:
 *		1) Within the loop for each digit (except '2' and '4')
 *		2) Once to print the newline at the end
 */
void	print_most_numbers(void)
{
	char	digit;

	/* 1er appel à _putchar (dans la boucle) */
	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
	}

	/* 2e appel à _putchar pour le saut de ligne */
	_putchar('\n');
}
