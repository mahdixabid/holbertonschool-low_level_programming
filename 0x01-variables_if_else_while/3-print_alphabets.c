
#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
printf("%c ", i);
putchar('\n');
for (i = 'A'; i <= 'Z'; i++)
printf("%c ", i);
putchar('\n');

return (0);
}
