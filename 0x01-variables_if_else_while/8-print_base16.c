#include <stdio.h>
/**
 * main - hexadecial
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int lc = 'a';

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	while (lc <= 'f')
	{
		putchar(lc);
		lc += 1;
	}
	putchar('\n');
	return (0);
}
