#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character (ASCII code) to be checked
 *
 * Description: Returns 1 if c is a letter (lowercase or uppercase),
 * otherwise returns 0.
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	/* Vérifie si c est entre 'a' et 'z' OU entre 'A' et 'Z' */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
