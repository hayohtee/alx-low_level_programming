#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev, next, i, sum;

	prev = 1;
	next = 2;
	sum = 0;

	for (i = 2; i < 100; i++)
	{
		if (prev > 4000000)
			break;

		if (prev % 2 == 0)
			sum += prev;

		unsigned long int temp = prev + next;

		prev = next;
		next = temp;
	}
	printf("%lu\n", sum);

	return (0);
}
