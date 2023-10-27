#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int l;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (l = 0; l < j; l += 0)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
