#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number.
 *
 * @n:the number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit=n % 10;
	_putchar(last_digit);
	return (last_digit);
}
