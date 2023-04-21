#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x = 0, y = 0, j;
	char *str;
	const char f_args[] = "cifs";

	va_start(args, format);
	while (format && format[x])
	{
		j = 0;
		while (f_args[j])
		{
			if (format[x] == f_args[j] && y)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int)), y = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), y = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), y = 1;
				break;
			case 's':
				str = va_arg(args, char *), y = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} x++;
	} printf("\n"), va_end(args);
}
