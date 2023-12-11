#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the letter to be checked
 * Return: 1 if c is a letter, Otherwise 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
