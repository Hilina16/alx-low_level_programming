#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings,followed by a new line
 * @separator: the separation between strings
 * @n: numberof strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *str;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (x < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
