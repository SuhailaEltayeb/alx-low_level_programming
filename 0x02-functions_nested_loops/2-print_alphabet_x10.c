#include "main.h"

/**
 * 2-print_alphabet_x10 - prints lowercase alphabet 10 times
 * followed by a new line
*/

void 2-print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}