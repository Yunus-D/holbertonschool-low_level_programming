#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer to process
 *
 * Description: Prints the last digit (in absolute) of n, et retourne cette
 * valeur numérique (entre 0 et 9).
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Récupère le dernier chiffre via le modulo 10 */
	last_digit = n % 10;

	/* Si la valeur est négative, on la rend positive */
	if (last_digit < 0)
		last_digit = -last_digit;

	/* Affiche le chiffre */
	_putchar(last_digit + '0');

	/* Retourne la valeur numérique du dernier chiffre */
	return (last_digit);
}
