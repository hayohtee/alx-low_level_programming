#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	unsigned int index = 0;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
