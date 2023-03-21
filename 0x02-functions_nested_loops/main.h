int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	for (int i = a; i  <= b; i++)
	{
		_putchar(i);
	}
	putchar('\n');
	return (0);
}
