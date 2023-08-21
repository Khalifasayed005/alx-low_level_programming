#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
