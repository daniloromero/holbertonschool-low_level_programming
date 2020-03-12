#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds 2 integers
 * @a: number 1
 * @b: number 2
 * Return: 0 if false, somethingelse otherwise
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts 2 integers
 * @a: number 1
 * @b: number 2
 * Return: 0 if false, somethingelse otherwise
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of 2 integers
 * @a: number 1
 * @b: number 2
 * Return: 0 if false, somethingelse otherwise
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 integers
 * @a: number 1
 * @b: number 2
 * Return: 0 if false, somethingelse otherwise
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - module b of a
 * @a: number 1
 * @b: number 2
 * Return: 0 if false, somethingelse otherwise
 */
int op_mod(int a, int b)
{
	return (a % b);
}
