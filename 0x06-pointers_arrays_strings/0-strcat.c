#include "holberton.h"
/**
 * _strcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @i: number of strings of s1
 * @n: number of strings of s2
 */
char *_strcat(char *dest, char *src)
{
int i;
int n;
i =0;
while (dest[i] != '\0')
	 {
		 i++;
	 }
 n=0;
 while(src[n] !='\0')
	 {
		 n++;
	 }
 dest[i]= src [n];
 n++;
 i++;
 dest[i] = '0';
 return (dest);
}
