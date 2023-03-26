#include <stdio.h>
#include <ctype.h>

/**
 * main - prints lowercase and upeercase of alphabet
 * Return: 0
 */

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}
