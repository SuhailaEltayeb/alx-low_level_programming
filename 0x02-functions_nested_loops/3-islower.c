#include "main.h"

/**
 * _is lower - checks the status of character
 * @c : the character to be checked
 * Return: 1 if lowercase, 0 otherwise
*/

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
