#include "main.h"

/**
 * _isdigit - checks if the value intered is a digit
 * @c: value to be chhecked
 * Return: 1 for digit and 0 for others
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
