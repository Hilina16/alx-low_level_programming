#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - check string if there is digit
 * @str: array of str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main -  a program that adds positive numbers.
 * @argc: count the argumenmt
 * @argv: array arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int add = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			add += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", add);
	return (0);
}
