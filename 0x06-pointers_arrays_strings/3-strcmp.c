#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string1
 * @s2: string2
 * Return: character count
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}
	return (0);
}
