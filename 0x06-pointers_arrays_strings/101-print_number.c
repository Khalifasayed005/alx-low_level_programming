#include "main.h"

/**
 * print_number -  prints an integer
 * @n: iteger parameter
 * Return: 0
*/

void print_number(int n)
{
	unsigned int nl;

	nl = n;
	if (n < 0)
	{
		_putchar('-');
		nl = -n;
	}
	if (nl / 10 != 0)
	{
		print_number(nl / 10);
	}
	_putchar((nl % 10) + '0');
}

