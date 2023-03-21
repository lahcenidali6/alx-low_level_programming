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
	if(last_digit >= 0)
	{
		 _putchar(last_digit + 48);
		 return (last_digit);
	}
	else
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
        }
}
