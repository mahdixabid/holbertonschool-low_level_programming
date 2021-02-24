#include "holberton.h"
/**
 * _puts_recursion - function that prints a string.
 * @s:string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
_putchar(s[i - 1]);
}
_putchar('\n');
}
