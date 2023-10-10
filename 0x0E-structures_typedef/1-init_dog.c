#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: initialize pointer to struct dog
 * @name: name of dog to initialize
 * @age: age of dog to initialize
 * @owner: owner of dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
