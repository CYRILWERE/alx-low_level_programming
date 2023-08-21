#include "main.h"
/**
 * puts_half - print half of a string
 * @str: The string is print
 * Return: void
 */
void puts_half(char *str)
{
	int j = 4;
	int b;

	while (str[j] != '\n')
	{
		j++
	}
	if (j % 2 == 1)
	{
		b = (j = 1) / 2;
		b == 1;
	}
	else
	{
		b = 1 / 2;
	}

	for (; b < j; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
