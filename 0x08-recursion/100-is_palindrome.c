#include "main.h"

/**
 * _strlen_recursion - function to return length of string
 * @s: string
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp_str - compares each character of given string
 * @s: string
 * @left: smallest iterator
 * @right: largest itratror
 * Return: intiger
*/

int comp_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
	return (0 + comp_str(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if
 * a string is a palindrome and 0 if not.
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_str(s, 0, _strlen_recursion(s - 1)));
}
