#include <stdio.h>

/**
 * main - prints the argument
 * @argc: number of command line argument
 * @argv: pointer to an array
 * Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
