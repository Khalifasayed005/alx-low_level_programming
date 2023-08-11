#include <stdio.h>

/**
 * main - entry point
 * Description: print all aplhabet letters
 * Return: always 0 (success)
*/
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
