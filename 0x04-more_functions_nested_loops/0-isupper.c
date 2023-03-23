#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: the characher we will check it
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
