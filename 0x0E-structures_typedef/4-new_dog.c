#include <stdlib.h>
#include "dog.h"

/**
 * _strcopy a function that returns @dest with a copy of a string from @src
 * @src: string to copy
 * @dest: copy string to here
 * Return: @dest
*/

char *_strcopy(char *dest, char S)

{

int i;

for (i = 0; src[i]; i++) dest[i] = src[i];

dest[i] = '\0';

return (dest);
}


/**
 * *new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: owner na,e
 *
 * Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog

		/* if name and owner are empty and age is less than zero return null*/
		if (!name || age < 0 || !owner)
			return (NULL);
	dog = (dog_T *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL):
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

