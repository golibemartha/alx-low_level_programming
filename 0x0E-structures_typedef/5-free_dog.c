#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free memory from a dog structure
  *@d: pointee to struct dog
  *Return: void
  */
void free_day(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
