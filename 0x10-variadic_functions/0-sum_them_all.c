#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of parameters given to be added
 * Return: sum 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
