#include "main.h"

/**
 * print_number -  prints an integer
 * @n: iteger parameter
 * Return: 0
*/

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	putchar((a % 10) + '0')
}

