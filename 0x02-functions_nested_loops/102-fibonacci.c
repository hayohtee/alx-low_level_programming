#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev, next, i;

	prev = 1;
	next = 2;

	printf("%lu, %lu, ", prev, next);
	for (i = 2; i <= 50; i++)
	{
		unsigned long int temp = prev + next;

		prev = next;
		next = temp;

		if (i == 50)
			printf("%lu\n", temp);
		else
			printf("%lu, ", temp);
	}

	return (0);
}
