#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char apl[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(apl[i]);
	}
	putchar('\n');
	return (0);
}
