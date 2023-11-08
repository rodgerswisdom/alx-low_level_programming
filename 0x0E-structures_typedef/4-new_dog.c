nclude <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
int main(void)
{
	dog_t *my_dog;
        my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
		return (1);

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	/* Free the allocated memory when done */
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return (0);
}
