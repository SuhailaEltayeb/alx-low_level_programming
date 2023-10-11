#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that adds 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the subtraction of 2 nums
 * @a: 1st number
 * @b: 2nd number
 * Return: subtraction of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function taht multiples 2 numbers
 * @a: 1st number
 * @b: second number
 * Return: multiplication of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns the devision result of 2 numbers
 * @a: 1st number
 * @b: second number
 * Return: division result of a/b
*/

int op_div(int a, int b)
{
	return (a / b);
}
 /**
  * op_mod - returns de=ivision remainder to 2 numbers
  * @a: 1st number
  * @b: second number
  * Return: remainder of division a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
