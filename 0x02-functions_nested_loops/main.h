#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int i = 97;
	while ( i  <= 122)
	{
		char c=i;
		_putchar(c);
		i++;
	}
	_putchar('\n')
}
