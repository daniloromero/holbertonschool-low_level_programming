#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct data_type- Struct d_t
 *
 * @t: print fucntion selector key
 * @fp: pointer to print function
 */
typedef struct data_type
{
char t;
void (*fp)(va_list ap);
} d_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
