#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string.
 * @c: The character.
 * Return: A pointer to the first occurrence of the character
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
