#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - executes a function given as a parameter on each element of an array.
 *@array:array of integers
 *@size: array size
 *@action: fuction as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && size != 0 && array != NULL)
	for (i = 0; i < size; i++)
		action(array[i]);
}
