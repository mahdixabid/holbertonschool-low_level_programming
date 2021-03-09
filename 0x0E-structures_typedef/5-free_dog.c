#include "dog.h"
#include <stdlib.h>
/**
*free_dog - free dog
*@d:pointer
*Return:void
*/
void free_dog(dogi *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

