#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to ","
 * @n: numbers of integers to be printed
 * Return string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n < 1)
		printf("\n");
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
