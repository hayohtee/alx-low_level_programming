#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: an integer
* Return: the last digit of n
*/
int print_last_digit(int n)
{
	int value = n % 10;

	_putchar('0' + value);
	return (value);
}
