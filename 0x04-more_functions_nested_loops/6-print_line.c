#include "main.h"

/**
 * print_line - prints straight line
 * @n: is the number of the _ characte printed
*/

void print_line(int n)
{
	int inchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inchr = 1; inchr <= n; inchr++)
			_putchar('_');
		_putchar('\n');
	}
}
