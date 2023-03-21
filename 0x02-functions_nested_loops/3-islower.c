#include "main.h"
/**
 * _islower - prints the alphabet, in lowercase
 *
 * c: the charachter we will check it
 *
 * Return: 1 if lowercase 0 otherwise
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
