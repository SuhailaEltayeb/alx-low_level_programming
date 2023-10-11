#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name string
 * @f: pointer to function tat prints
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
