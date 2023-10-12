#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments
 *  passed to the function
 *  Return: all arguments passed to print_all function
*/

void print_all(const char * const format, ...)
{
	int i, ch_status; /* declaration of variables and their datatypes */
	char *str;
	va_list s;

	va_start(s, format); /* var argumants initialization */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(s, int));
				ch_status = 0; /* check condition */
				break;
			case 'f':
				printf("%f", va_arg(s, double));
				ch_status = 0;
				break;
			case 'c':
				printf("%c", va_arg(s, int));
				ch_status = 0;
				break;
			case 's':
				str = va_arg(s, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				ch_status = 0;
				break;
			default:
				ch_status = 1;
				break;
		}
		if (format[i + 1] != '\0' && ch_status == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(s);
}
