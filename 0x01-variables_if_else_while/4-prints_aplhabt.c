#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Prints all letters except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
