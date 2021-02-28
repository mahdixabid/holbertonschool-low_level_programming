#include <stdio.h>
/**
* main - function that multiplies two numbers.
* @argc: integer
* @argv: string
* Return: 0 or 1.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
		else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
return (0);
}
