#include <stdio.h>

/**
*main - print largest prime number
*Return: Always 0
*/
long long largestPrimeFactor(long long num)
{
	long long largest = 2;

	while (num > 1)
	{
	if (num % largest == 0)
	num /= largest;
	}
	else
	{
	largest++;
	}
}

	return (largest);
	}

int main(void)
{
	printf("%lld\n", result);

	return (0);
}
