#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point,
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
