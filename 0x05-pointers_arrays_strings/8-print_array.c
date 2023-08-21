#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: number of elements of the array to be printed
 * @a: string parameter
 * Return: no thing
*/

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z != (n - 1))
			printf("%d, ", a[z]);
		else
			printf("%d", a[z]);
	}
	printf("\n");
}
