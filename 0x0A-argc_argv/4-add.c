#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - adds two positive integers.
*@argc: integer
*@argv: string.
*Return: 0
*/

int main(int argc, char *argv[])
{
int i, j, x;

i = 1;
x = 0;
	while (i < argc)
	{
	j = 0;
		while (j < argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
			printf("Error\n");
			return (1);
			}
		j++;
		}
	x += atoi(argv[i]);
	i++;
	}
printf("%d\n", x);
return (0);
}
