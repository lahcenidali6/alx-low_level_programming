#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 *
 * @size:   is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i + 1)
			{
				_putchar(35);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
