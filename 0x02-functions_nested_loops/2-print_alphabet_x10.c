#include "holberton.h"

/**
 * print_alphabet_x10 - show10linesofalphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char w;
int i;
for (i = 1; i <= 10; ++i)
{
for (w = 'a' ; w <= 'z'; ++w)
{
_putchar(w);
}
_putchar('\n');
}
}
