#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: char aeeay string
 * Return: no thing
*/

void puts_half(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
		;
	z++;
	for (z /= 2; str[z] != '\0'; z++)
	{
		putchar(str[z]);
	}
	putchar('\n');
}
