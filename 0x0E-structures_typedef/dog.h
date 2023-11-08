#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Description: Structure of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
