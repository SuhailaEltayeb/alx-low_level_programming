#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - that adds positive numbers.
 * @argc: number of arguments
 * @argv: array
 * Return: 0, if sicessful,
 * one of the number contains symbols that are not digits
*/

int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
