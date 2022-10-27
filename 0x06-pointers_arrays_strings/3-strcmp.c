#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integer value indicating the relationship
 */

int _strcmp(char *s1, char *s2)
{
	int min;
	int i;
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);

	if (s1Len <= s2Len)
		min = s1Len;
	else
		min = s2Len;

	i = 0;

	for (i = 0; i < min; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
