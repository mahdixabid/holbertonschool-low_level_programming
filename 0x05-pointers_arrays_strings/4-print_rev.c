#include "holberton.h"
/**
* print_rev - function that prints a string in reverse.
* @s: character.
* Return: a reversed string.
*/
void print_rev(char *s)
{
int i = 0;
int j;
while (*(s + i) != '\0')
{
++i;
}
for (j = i; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
