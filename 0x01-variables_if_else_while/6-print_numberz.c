#include <stdio.h>
/**
 * main - base 10 numbers
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
