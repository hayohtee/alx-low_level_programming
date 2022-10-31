#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The source address.
 * @b: The constant byte.
 * @n: The number of bytes to fill.
 *
 * Return: The source address.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
