#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: string parameter
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	int z = 1;

	do {
		if (*s == '-')
			z *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * z);
}

