#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphABET
 *
 * Return: 0 (Sucees)
 */
int main(void)
{
	char aplh[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0, i <= 52, i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
