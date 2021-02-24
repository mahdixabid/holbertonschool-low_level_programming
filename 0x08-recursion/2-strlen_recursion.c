#include "holberton.h"
/**
 * _strlen_recursion - function that return the length of string.
 * @s:string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
