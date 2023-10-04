#include "main.h"
#include "stdlib.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to the cncatinated string
*/

char *str_concat(char *s1, char *s2)
{
	size_t length1, length2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (s1[length2] != '\0')
	{
		length2++;
	}
	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= length2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
