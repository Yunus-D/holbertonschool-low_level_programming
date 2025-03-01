#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The integer (ASCII code) to be checked
 *
 * Description:
 *	Cette fonction vérifie si la valeur entière 'c' correspond
 *	au code ASCII d'un caractère numérique de '0' à '9'.
 *	Si oui, elle retourne 1 ; sinon, 0.
 *
 * Constraints / Notes:
 *	- Aucune fonction de la bibliothèque standard n’est utilisée
 *	  (pas de printf, etc.).
 *	- Respect des exigences générales : pas de variable globale,
 *	  pas plus de 5 fonctions dans ce fichier, style Betty...
 *	- Le fichier d’en-tête main.h doit déclarer int _isdigit(int c).
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
