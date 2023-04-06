#include "main.h"
/**
 * factorial - function that returns the factorial
 * @n: The number
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
