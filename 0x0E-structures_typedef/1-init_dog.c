#include "dog.h"
/**
 * init_dog - function
 * struct dog - struct
 * @d: pointer
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 *
 * Description - struct and header
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

