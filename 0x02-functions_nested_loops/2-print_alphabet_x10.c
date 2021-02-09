#include "holberton.h"
/**
* print_alphabet - function to print alphabet in lowercase.
*
* Return:0  (sucess)
*/
void print_alphabet_x10(void)
{
char w;
int i;
 
for (i=1 ; i<= 10; ++i)
{
for (w = 'a' ; w <= 'z'; ++w)
{
_putchar(w);
}
_putchar('\n');
}
}
