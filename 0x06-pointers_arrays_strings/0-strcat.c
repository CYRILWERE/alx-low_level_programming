#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, 1;

	while (dest[dlen])
	{
		dlen++;
	}

	for (l = 0; src[l] != 0; 1++)
	{
		dest[dlen] = src[l];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
