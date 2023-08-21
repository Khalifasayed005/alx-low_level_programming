#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: string parameter
 * Return: no thing
*/

void rev_string(char *s)
{
	int l, i;
	char z;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; i++)
	{
		z = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = z;
	}
}
