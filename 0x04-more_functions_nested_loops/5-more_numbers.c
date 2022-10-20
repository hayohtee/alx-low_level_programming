#include "main.h"

/**
  * more_numbers - Print 10 times number from 0-14
  */
void more_numbers(void)
{
	int i, h;

	for (h = 0; h < 10; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
