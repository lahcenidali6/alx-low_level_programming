#include <stdio.h>
/**
 * main - Entry point, print Programming is like building a multilingual puzzle
 *
 * Return: 1
 */
int main(void)
{
    char str[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, str, sizeof(str));          
    return (1);
}
