#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 97;
    
    while (i != 123){
        putchar(i);
        if(i == 122)
        {
            putchar('\n');
        }
        i++;
    }
	return (0);
}
