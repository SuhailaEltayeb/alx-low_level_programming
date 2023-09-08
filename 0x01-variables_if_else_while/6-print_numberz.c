#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all single digit numbers of base 10
 *
 * Return: Always return 0 (success)
*/

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
