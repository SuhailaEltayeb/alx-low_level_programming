#include "main.h"

void print(unsigned long int n);

/**
 * print_binary - function prints binary representation of #
 * @n: number to be converted
 * Return: biary number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print(n);
	}
}
/**
 * print - fucntion to print pinary num
 * @n: decimal num to be converted to binary
 * Return: void
 */
void print(unsigned long int n)
{
	if (n == 0)
		return;
	print(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
