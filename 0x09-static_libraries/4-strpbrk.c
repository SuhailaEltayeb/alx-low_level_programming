#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @accept: input string
 * @s: output string
 * Return: pointer to byte in s to match bytes in accept
 * or Null if no such byte found
*/

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
