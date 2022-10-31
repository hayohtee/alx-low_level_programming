#include "main.h"

/**
 * _memcpy - Copies memory area from the source to destination.
 * @dest: The destination address.
 * @src: The source address.
 * @n: The number of bytes to copy.
 *
 * Return: The destination address.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
