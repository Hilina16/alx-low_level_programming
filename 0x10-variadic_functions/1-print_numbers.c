#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print outnumbers followed by new line
 * @separator: the separation between the numbers
 * @n: the numberof integers passed
 * @...: elipsis represents the numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
