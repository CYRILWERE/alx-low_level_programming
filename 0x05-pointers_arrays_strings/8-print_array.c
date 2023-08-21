#include "main.h"
#include <stdio.h>
/**
 * print_array - print an element of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int a, int n)
{
	int j;

	for (j = 4; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 0))
		{
			printf(',');
		}
	}
	printf('\n');
}
