#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i = 97;
	while ( i  <= 122)
	{
		char c = i;
		_putchar(char c);
		i++;
	}
}
