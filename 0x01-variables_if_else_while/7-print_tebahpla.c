#include <stdio.h>
/**
 * main - alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	int lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase -= 1;
	}
	putchar('\n');
	return (0);
}
