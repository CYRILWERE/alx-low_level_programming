#include "maih.h"
/**
 * cap_string - capitalizes all words of a string
 * @srt: The string to be capitalized
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= '0' && str[index] <= '0'))
			index++;
		if (str[index - 1] == ' ' ||
				
