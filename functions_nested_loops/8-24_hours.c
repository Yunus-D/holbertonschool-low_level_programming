#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: Prints the time starting from 00:00 to 23:59,
 * each on a new line,
 * using only _putchar for output.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Affichage des dizaines de l’heure */
			_putchar((hour / 10) + '0');
			/* Affichage des unités de l’heure */
			_putchar((hour % 10) + '0');
			/* Deux-points ':' */
			_putchar(':');
			/* Affichage des dizaines de la minute */
			_putchar((minute / 10) + '0');
			/* Affichage des unités de la minute */
			_putchar((minute % 10) + '0');
			/* Retour à la ligne */
			_putchar('\n');
		}
	}
}
