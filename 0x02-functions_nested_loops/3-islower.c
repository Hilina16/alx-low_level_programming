#include "main.h"

/**
 * _islower -checks for the lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase character otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
