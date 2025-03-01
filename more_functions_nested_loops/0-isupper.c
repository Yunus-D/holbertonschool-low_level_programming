#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The integer (ASCII code) to be checked
 *
 * Description:
 *	This function verifies si la valeur de 'c' se situe entre
 *	'A' (ASCII 65) et 'Z' (ASCII 90). Si c’est le cas, elle
 *	retourne 1 ; sinon, 0.
 *
 * Constraints / Notes:
 *	- Aucun appel à la bibliothèque standard n’est effectué
 *	  (on ne fait pas de printf, ni puts).
 *	- Aucune variable globale n’est utilisée.
 *	- Cette fonction ne fait qu’un test logique, puis renvoie
 *	  une valeur ; elle ne génère aucune sortie via _putchar.
 *	- Respecte le style Betty (80 colonnes max, indentation, etc.).
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
