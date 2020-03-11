#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - print name
 *@array: name to print
 *@size: array size
 *@action: fuction as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
