#include "main.h"
/**
 * _isupper - prints the alphabet, in lowercase
 *
 * @c: the characher we will check it
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
