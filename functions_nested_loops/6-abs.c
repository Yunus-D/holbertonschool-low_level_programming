#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to process
 *
 * Description: Returns n si n >= 0, ou -n si n < 0.
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
