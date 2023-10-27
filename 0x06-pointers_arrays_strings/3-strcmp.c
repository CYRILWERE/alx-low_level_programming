#include "main.h"
/**
 * _strcpy - compares pointer to two strings
 * @s1: A pointer to the string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference of
 *  the first unmatched characters
 *  if str1 == str2, 0
 *  if str1 > str2, the positive difference of the first unmatched characters
 */
int _strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
