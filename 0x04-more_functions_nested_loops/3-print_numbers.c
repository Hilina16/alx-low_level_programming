#include "main.h"

/**
 * print_numbers - prints numbers from zero to 9
 * @c:is the number to be printed
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
