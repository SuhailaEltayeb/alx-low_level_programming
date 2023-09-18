#include "main.h"

/**
 * swap_int - function swaps values of two integers.
 * @a: intiger to swap
 * @b:intiger to swap
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
