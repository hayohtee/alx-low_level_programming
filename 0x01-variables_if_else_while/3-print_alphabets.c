#include <stdio.h>

/**
  * main - The entry point for the program
  * Return: The exit code
  */
int main(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
		putchar(ch + i);

	ch = 'A';
	for (i = 0; i < 26; i++)
		putchar(ch + 1);

	putchar('\n');

	return (0);
}
