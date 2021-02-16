#include "holberton.h"

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
