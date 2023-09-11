#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: the dog print
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("NAME: %s\n", d->name ? d->name : "(nil)");
		printff("AGE: %f\n", d->age);
		printf("OWNER: %s\n", d->owner ? d->owner : "(nil)");
	}
}
