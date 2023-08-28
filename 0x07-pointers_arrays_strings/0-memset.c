#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer tn the constant
 * @b: the constant
 * @n: max byte
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; n > 0; z++, n--)
	{
		s[z] = b;
	}
	return (s);
}
