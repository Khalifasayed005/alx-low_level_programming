#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of array
*/

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < i--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
