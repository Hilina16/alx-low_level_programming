#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the numberof arguments to bepassed
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
