#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function to print opcodes
 * @argc: arg.. count
 * @argv: args vector
 * Return: always 0
*/
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int s;

	if (argc != 2)
		printf("Error\n");
	exit(1);
	s = atoi(argv[1]);
	if (s < 0)
		printf("Error\n");
	exit(2);

	while (s--)
		printf("%02hhx%s", *p++, s ? " " : "\n");
	return (0);
}
