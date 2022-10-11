#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - creates a new dog
  * @name: 1st member
  * @age: 2nd member
  * @owner: 3rd member
  * Return: Null if fail
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_day;
	int e, n, i;

	e = n = i = 0;
	while (name[e++] != '\0')
		;
	while (owner[n++] != '\0')
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(e);
	new_dog->owner = malloc(n);
	do {
		new_dog->name[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		new_dog->owner[i] = owner[i];
	} while (owner[i++] != '\0');
	new_dog->age = age;
	return (new_dog);
}
