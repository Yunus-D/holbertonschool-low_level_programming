#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line,
 *        with "Fizz" for multiples of 3, "Buzz" for multiples of 5,
 *        and "FizzBuzz" for multiples of both 3 and 5.
 *
 * Return: 0 if the program completes successfully
 */
int	main(void)
{
	int	i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
