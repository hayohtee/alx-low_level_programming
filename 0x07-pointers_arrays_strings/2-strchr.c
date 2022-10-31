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
	for (; *s != '\0'; s++)
	{
	if (*s == c)
		return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	else
	return (NULL);
}
