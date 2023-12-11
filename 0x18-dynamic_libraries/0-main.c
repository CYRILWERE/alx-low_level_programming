#include "main.h"
#include <stdio.h>

/**
 * main - Test program for the dynamic library
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (0);
}

