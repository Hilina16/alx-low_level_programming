#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correctoperation
 * @s: the operator passed as an argument
 * Return: Apointerto the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;
	return (ops[x].f);
}
