#include <stdio.h>
/**
*main - main function
*
*Return: 0
*/
int main(void)
{
int x;
int e;

for (x = '0'; x <= '9'; ++x)
{
for (e = '0'; e <= '9'; ++e)
{
if (x != '0' || e != '0')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(e);
}
}
putchar('\n');
return (0);
}
