#include "dog.h"
/**
 * init_dog - intitialisez the information
 * @d: struct dog
 * @age: age of dog
 * @name: name of dog
 * @owner: owner of dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owmer = owner;
	}
}
