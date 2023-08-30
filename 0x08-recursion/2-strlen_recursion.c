#include "main.h"
/**
 * _strlen_recursion - returne the length of a string
 * @s: pointer the string
 * Return: int
*/

int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')

{

ntr += strlen recursion(s + 1) + 1;
}
return (ntr);
}
