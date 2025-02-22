#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - point d'entree
*
* Description: Ce programme attribue un nombre aleatoire a la variable n
* et il indique si le nombre et positif, negatif ou zero
*
*return: toujours 0 = succes
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	}
	return (0);
}
