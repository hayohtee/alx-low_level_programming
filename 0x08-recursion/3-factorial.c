#include "main.h"

/**
 * factorial - Get the factorial of a
 * given number.
 * @n: the number
 * Return: the factorial
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
