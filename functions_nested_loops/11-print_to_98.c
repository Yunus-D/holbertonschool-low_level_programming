#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: Prints numbers separated by a comma and a space.
 * If n is less than or equal to 98, numbers are printed in ascending order;
 * otherwise, they are printed in descending order.
 * The output ends with a new line.
 */
void	print_to_98(int n)
{
	int	i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
