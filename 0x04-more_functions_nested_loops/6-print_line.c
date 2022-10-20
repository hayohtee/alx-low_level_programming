#include "main.h"

/**
  * print_line - draw straight line
  * @n: number of times
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
