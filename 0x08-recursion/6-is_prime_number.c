#include "main.h"
int check_prime(int n, int x);
/**
 * is_prime_number - checks whether the integeris prime or not
 * @n: the integer to be checked
 * Return: if the numberis prime 1, if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
/**
 * check_prime - check if the number is prime recursively
 * @n: number to be checked
 * @x: iterator
 * Return: 1 if prime and 0 if not
 */
int check_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
		return (0);
	return (check_prime(n, x - 1));
}
