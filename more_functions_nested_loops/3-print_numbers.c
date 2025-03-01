#include "main.h"

/**
 * print_numbers - prints the digits from 0 to 9, followed by a new line
 *
 * Description:
 *	This function loops through the characters '0' to '9'.
 *	It uses _putchar exactly twice in the code:
 *		1) In the loop to print each digit
 *		2) Once more to print the newline at the end
 */
void	print_numbers(void)
{
	char	digit;

	/**
	*1er appel à _putchar dans la boucle
	*(répété à l'exécution, mais une seule ligne dans le code)
	*/
	for (digit = '0'; digit <= '9'; digit++)
		_putchar(digit);

	/* 2e appel à _putchar pour le saut de ligne final */
	_putchar('\n');
}
