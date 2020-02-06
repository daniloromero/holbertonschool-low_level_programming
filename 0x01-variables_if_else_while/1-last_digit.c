#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* The last digit */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = Last_Digit(n)
	if (LastDigit > 5)
		print("Last digit of %i is %i and is greater than 5", n, LastDigit);
	else if (LastDigit == 0)
		printf("Last digit of %i and is 0", n, LastDigit);
		else
		printf("Last digit of %i is %i and is less than 6 and not 0", n, LastDigit);
	return (0);
}
