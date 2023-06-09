#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to initialize struct dog
 * @name: name of thedog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
