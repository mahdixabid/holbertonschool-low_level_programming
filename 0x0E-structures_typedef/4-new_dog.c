#include "dog.h"
#include <stdlib.h>

/**
* _strlen -returns the length of a string
* @s: char
* Return: i.
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
	;
return (i);
}
/**
 * _strcpy - copy the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * new_dog - init new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL)
	{
		d->name = NULL;
	}
	else
	{

		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = _strcpy(d->name, name);
	}
	if (owner == NULL)
	{
		d->owner = NULL;
	}
	else
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(d->owner, owner);
	}
		d->age = age;
	return (d);
}
