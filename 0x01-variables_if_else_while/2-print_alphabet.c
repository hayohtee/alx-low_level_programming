#include <stdio.h>

/**
  * main - The entry point for the program
  * Return: The exit code
  */
int main(void)
{
	char ch = 'a';

	for (int i = 0; i < 26; i++)
		putchar(ch + i);
	putchar('\n');

	return (0);
}
