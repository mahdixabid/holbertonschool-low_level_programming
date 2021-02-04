#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
int i;

for (i = '0'; i - 1 < '9'; ++i)
{
putchar(i);
}
for (i = 'a'; i - 1 < 'f'; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
