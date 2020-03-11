#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - print name
 *@name: name to print
 *@f: pinter to function
 *@name:
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
