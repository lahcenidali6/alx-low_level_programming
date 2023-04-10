#include <stdio.h>
#include "main.h"
/**
 * main - Entry point,
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	for (int i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
