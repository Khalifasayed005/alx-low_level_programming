#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string parameter
 * Return: no thing
*/

void puts2(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; ++z)
	{
		if (z % 2 == 0)
			putchar(str[z]);
	}
	putchar('\n');
}
