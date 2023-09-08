#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - entry point
 *
 * Description: program that prints the alphabet in lowercase
 *
 * Return: Always return 0 (success)
*/

int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar (i);
		}
	}
	putchar ('\n');
	return (0);
}
