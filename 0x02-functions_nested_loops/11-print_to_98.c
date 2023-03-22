#include "main.h"
/**
 * print_to_98 - ll natural numbers from n to 98.
 *
 * @n: A number that starts from when counting
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if ((i / 10) != 0)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		if(i != 98)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
