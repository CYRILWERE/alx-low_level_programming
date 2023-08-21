#include <stdio.h>
/**
 * _Strlen - Returns the length of a string
 * @Str: The string to get the length of a string
 * Return: The length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
