#include <stdio.h>
#include "dog.h"
/**
 *_dog - initialize a variable
 *@name: char
 *@age: float
 *@owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
