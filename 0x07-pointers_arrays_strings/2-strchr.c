#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @c: first character in string to be located
 * @s: string to be located
 * Return: first occurence of c in string
 * Null if character c not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
