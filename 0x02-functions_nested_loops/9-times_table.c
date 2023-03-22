#include "main.h"
/**
 *times_table - function that print the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, number, index;

	for (i = 0; i < 10; i++)
	{
		index = 0;
		for (number = 0; number < 10; number++)
		{
			index = i * number;
			if ((index / 10) != 0)
			{
				_putchar((index / 10) + '0');
			}
			_putchar((index % 10) + '0');
			if (number != 9)
			{
				_putchar(44);
				_putchar(32);
				if (((i * (number + 1)) / 10) == 0)
				{
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
