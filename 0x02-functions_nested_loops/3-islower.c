#include "main.h"
/**
 * _islower - prints the alphabet, in lowercase
 *
 * Return: 1 if lowercase 0 otherwise
 *
 *   member 'c' - the charachter we will check it
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
