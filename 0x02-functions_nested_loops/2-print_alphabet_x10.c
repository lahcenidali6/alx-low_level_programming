#include "main.h"
/**
 * print_alphabet-prints the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 97,j = 0;
	
	for (;j<10;j++)
	{
		while (i <= 122)
		{
			char c = i;
			_putchar(c);
			i++;
		}
		_putchar('\n'); 
	}
}
