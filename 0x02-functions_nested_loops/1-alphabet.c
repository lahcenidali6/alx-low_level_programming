#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
print_alphabet()
{
        int i = 97;
        while ( i  <= 122)
        {
                char c=i;
                _putchar(c);
                i++;
        }
        _putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
