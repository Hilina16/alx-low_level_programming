#include "function_pointers.h"
/**
 * print_name -  function that prints a name
 * @name: is the input string name
 * @f: is a pointerto function argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
