#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
i
void print_alphabet(void)
{
	for (int i = 97; i  <= 122; i++)
	{
		char c=i;
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
