#include "main.h"
#include "stdlib.h"

/**
 * _strdup - function returns pointer to new space in memory
 * @str: input string
 * Return: pointer to the duplicated string,
 * NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	size_t i, j;
	char *str_out;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str_out = malloc(sizeof(char) * (i + 1));
	if (str_out == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		str_out[j] = str[j];
	}
	return (str_out);
}
