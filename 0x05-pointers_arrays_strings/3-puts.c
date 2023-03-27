/**
 * _puts - function that prints a string, followed by a new line
 * @str: The character to print
 */
void _puts(char *str)
{
	fputs(str, stdout);
	putchar('\n');
}
