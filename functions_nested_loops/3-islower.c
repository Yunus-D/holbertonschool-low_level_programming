#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked, in int form
 *
 * Description: Returns 1 si c est une lettre minuscule ('a' à 'z'),
 * sinon retourne 0.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
