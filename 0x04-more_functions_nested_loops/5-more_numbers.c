#include "main.h"

/**
  * more_numbers - Print 10 times number from 0-14
  */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 9)
			{
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
		}
		_putchar('\n');
	}
}
