#include "main.h"

/**
 * print_numbers - unction that prints numbers 0 to 9
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
