#include "main.h"
/**
 * print_sign - check the sign of number.
 *
 * @n: the parameter will check it
 *
 * Return: 1 if + 0 if =0 -1 if -
 */
int print_sign(int n)
{
	if (n>0)
	{
		return (1);
	}
	else if (n<0)
	{
		return (-1);
	}
	else {
		return (0);
	}
}
