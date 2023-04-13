#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives one per line
 * @argc: count number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
