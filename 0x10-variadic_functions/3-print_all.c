#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_c - prints chcaracters
 * @ls:element to be printed
 * Return: void
 */
void print_c(va_list ls)
{
	printf("%c", va_arg(ls, int));
}
/**
 * print_int - prints inetegers
 * @ls: element to be printed
 * Return: void
 */
void print_int(va_list ls)
{
	printf("%i", va_arg(ls, int));
}
/**
 * print_float - prints float numbers
 * @ls: element to be printed
 * Return: void
 */
void print_float(va_list ls)
{
	printf("%f", va_arg(ls, double));
}
/**
 * print_string - prints anything
 * @ls: element to be printed
 * Return: void
 */
void print_string(va_list ls)
{
	printf("%s", va_arg(ls, char *));
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return string
 */
void print_all(const char * const format, ...)

{
	va_list ap;
	int r = 0;
	int f = 0;

	d_t types[] = {
		{'c', print_c},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);
	while (format[r])
	{
		while (types[f].t)
		{
			if (types[f].t == format[r])
				types[f].fp(ap);
			f++;
		}
		f = 0;
		if (format[r + 1])
			printf(", ");
		r++;
	}
	printf("\n");
	va_end(ap);
}
