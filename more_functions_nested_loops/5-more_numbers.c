#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line
 *
 * Description:
 *	We only call _putchar three times in the source code:
 *		1) If the number is above 9, print the tens digit
 *		2) Print the ones digit
 *		3) Print the newline at the end of each line
 *	Thus, this code prints 0..14 on a line, repeated 10 times.
 */
void	more_numbers(void)
{
	int	line;
	int	num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');  /* 1er appel (pour tens) */
			_putchar((num % 10) + '0');      /* 2e appel (pour ones) */
		}
		_putchar('\n');                     /* 3e appel (pour newline) */
	}
}
