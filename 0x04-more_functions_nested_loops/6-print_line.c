#include "main.h"
/**
 * print_line - print line
 * @n: underscores
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
