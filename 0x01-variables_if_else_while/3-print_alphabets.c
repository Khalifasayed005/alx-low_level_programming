#include <stdio.h>
/**
 *  main - Entery point
 * Description: print alphabet in lowercase then in uppercase
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* prints A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');
	return (0);
}

