#include <stdio.h>

/*
 * main - entry point
 *
 * Description: a c proram to print alpabet reversably
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char (ch);

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
