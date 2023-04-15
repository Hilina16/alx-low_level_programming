#include "main.h"
int actual_sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input square root
 * Return: the square root value of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses and find the square root
 * @n: number to be calculated for square root
 * @x: iterator
 * Return: theresult of squareroot
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
