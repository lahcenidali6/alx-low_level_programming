#include "dog.h"
#include <stddef.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: Pointer of new dog struct
 * @name: Pointer the name
 * @age: Pointer the age
 * @owner: Pointer the name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
