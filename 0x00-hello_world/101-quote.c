#include <stdio.h>
#include <unistd.h>

/**
 * main - a c program that prints a line to the standard error
 * Return: 1 (Success)
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
