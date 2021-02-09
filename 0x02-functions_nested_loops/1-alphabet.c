#include "holberton.h"
/**
* print_alphabet - function to print alphabet in lowercase.
*
* Return:0  (sucess)
*/
void print_alphabet(void)
{
char w;

for (w = 'a'; w <= 'z'; ++w)
{
_putchar(w);
}
_putchar('\n');
}
