#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Prints single digits from 0
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
	putchar('\n');
	return (0);
}
