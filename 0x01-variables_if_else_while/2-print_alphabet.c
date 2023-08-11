#include <stdio.h>

/**
 * main - entry point
 * Description: print all aplhabet letters
 * Return: always0 (success)
*/
int main(void)
{
	int n = 97;
		while (n <= 122)
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		return (0);
}
