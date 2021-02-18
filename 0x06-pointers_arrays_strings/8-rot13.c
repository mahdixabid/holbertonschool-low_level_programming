#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
int i, j;
char AaBb[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (str[i] != '\0')
{
j = 0;
while (AaBb[j] != '\0')
{
if (str[i] == AaBb[j])
{
str[i] = rot[j];
break;
}
j++;
}
i++;
}
return (str);
}
