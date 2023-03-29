#include "main.h"
/**
 * print_diagonal - print diagonals \
 * @n - the number of \ characters to be drawn
 * Return: void
 */
void print_diagonal(int n)
{
	int slash, gap;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (gap = 0; gap <= slash; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
	if (n == 0)
		_putchar('\n');
}
