#include "main.h"
/**
 *_abs - the function that computes the absolute value of an integer
 *
 * @n:The argument for which you are computes  the absolute value
 *
 * Return: n if n psitive or equal 0 , -n if n negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
