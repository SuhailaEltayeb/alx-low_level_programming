#include "main.h"
#include "stdlib.h"

/**
 * _calloc - function allocates memory for an array, using malloc
 * @nmemb: intiger elements of array
 * @size: size of elements
 * Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
