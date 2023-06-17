#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Prints lowercase letters in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char myLetters = "abcdefghijklmnopqrstuvwxyz";

	for (myLetters <= "z"; myLetters--)
	{
		putchar(myLetters);
	}
	putchar('\n');
	return (0);
}
