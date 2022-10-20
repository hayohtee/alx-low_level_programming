#include "main.h"

/**
  * print_most_numbers - Print numbers from 0 - 9 excluding 2 and 4
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = '0' + i;

		if (ch != '2' || ch != '4')
			_putchar(ch);
	}
	_putchar('\n');
}
