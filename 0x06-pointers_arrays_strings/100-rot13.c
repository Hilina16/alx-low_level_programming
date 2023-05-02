#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13.
 * @str: is a string to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	int x;
	char small[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cap[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = str;

	while (*str)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*str == small[x])
			{
				*str = cap[x];
				break;
			}
		}
		str++;
	}
	return (p);
}
