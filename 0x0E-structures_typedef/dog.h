#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: the dogs name
 * @age: the age of the dog
 * @owner: The owners name
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
