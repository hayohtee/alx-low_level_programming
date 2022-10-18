#include "main.h"

/**
* print_sign - print the sign of a number
* @n: an integer
* Return: 1 if n is greater than 0, 0 if the n is equal to 0,
* -1 if n is less than 0
*/
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else
	{
		value = 0;
		_putchar('0');
	}

	return (value);
}
