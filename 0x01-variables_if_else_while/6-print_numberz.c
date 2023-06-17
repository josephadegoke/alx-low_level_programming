#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*8
 * main - Prints single digits from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
