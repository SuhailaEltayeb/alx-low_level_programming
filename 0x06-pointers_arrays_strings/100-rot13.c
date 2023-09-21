#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 *
 * Return: *s
*/

char *rot13(char *s)
{
	int i;
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = strrot[j];
				break;
			}
		}
	}
	return (s);
}
