#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* main - Prints numbers of base 16
*
* Return: 0 (Success)
*/
int main(void)
{

	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
