#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	static char arr[100] = "";
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		arr[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		arr[i] = src[j];
		i++;
		j++;
	}

	arr[i] = '\0';

	return (arr);
}
