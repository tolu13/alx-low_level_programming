#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - structure that stores information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description -structure that stores dog name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
