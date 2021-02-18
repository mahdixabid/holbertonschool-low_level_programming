#include "holberton.h"
/**
 * _strcmp - comparing
 * @s1: input 1
 * @s2: input 2
 *
 * Return: 0 if equal or j if is different
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0' && j == 0)
{
j = s1[i] - s2[i];
i++;
}
return (j);
}
