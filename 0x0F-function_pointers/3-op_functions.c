#include "function_pointers.h"
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: first number input
 * @b: second numberinput
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two integers
 * @a: first input
 * @b: second input
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first input
 * @b: second input
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: first input
 * @b: second input
 * Return: quotient of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of two integers
 * @a: first input
 * @b: second input
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
