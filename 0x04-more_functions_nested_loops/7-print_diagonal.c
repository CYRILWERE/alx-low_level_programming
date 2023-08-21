#include "main.h"

/**
 * print_dignal - Draw a diagnol line according parameter
 * @n: the number of times to print diagnol lines
 * Return: empty
 */
void print_diagnol(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
