#include <stdio.h>
/**
*main - main function
*
*Return: 0
*/
int main(void)
{
int i;
long int j, z, t;

z = 1;
j = 1;
t = z;
printf("1, ");
for (i = 3; i < 52; ++i)
{
if (i < 51)
{
j = j + t;
printf("%ld, ", j);
t = z;
z = j;
}
else
{
j = j + t;
printf("%ld", j);
t = z;
z = j;
}

}
printf("\n");
return (0);
}
