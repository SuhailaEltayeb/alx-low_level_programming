#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: input string
 * @needle: output string
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *p = needle;

		while (*x == *p && *p != '\0')
		{
			x++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
