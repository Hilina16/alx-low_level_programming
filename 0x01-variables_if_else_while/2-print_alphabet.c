#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase alphabet
 * Return: 0
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
