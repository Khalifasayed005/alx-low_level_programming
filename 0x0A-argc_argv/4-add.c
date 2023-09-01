#include <stdio.h>
#include <stdlib.h>

/**
 * main - that adds positive numbers
 * @argc: number of argument
 * @argv: array of pointer to argument
 * Return: 0
*/

int main(int argc, char *argv[])
{       
int n = 0;
char *c;

while (--argc)
{
	for (c = argv[argc]; *c; c++)
		if (*c < '0' )
			return (printf("Error\n"), 1);
	n += atoi(argv[argc]);
}
	printf("%d\n", n);
	return (0);
}
