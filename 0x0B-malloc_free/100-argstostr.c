#include "main.h"
#include "stdlib.h"

/**
 * argstostr - function concatenates all arguments of program.
 * @ac: counter
 * @av: vector
 *
 * Return: pointer to array of chars
*/

char *argstostr(int ac, char **av)
{
	char *aout;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j]; j++)
			length++;
	}
	length += ac;

	aout = malloc(sizeof(char) * length + 1);
	if (aout == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			aout[k] = av[i][j];
			k++;
		}
		if (aout[k] == '\0')
		{
			aout[k++] = '\n';
		}
	}
	return (aout);
}
