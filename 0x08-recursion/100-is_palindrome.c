#include "main.h"
int check_palindrome(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks  if a string is a palindrome or not
 * @s: is a string to be reversed
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
/**
 * check_palindrome - check if the character is palindrome or not
 * @s: string to be checked
 * @x: iterator
 * @len: length of the string
 * Return: 1 if palindrome and 0 if not
 */
int check_palindrome(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_palindrome(s, x + 1, len - 1));
}
/**
 * _strlen_recursion - counts the length of the string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
