#include "main.h"

/**
 * _isupper - checks wheter the character is uppercase or not
 * @c: the character to be checked
 * Return: 1 for uppercase and 0 for other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
