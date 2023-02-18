#include <stdio.h>

/**
 * main - Prints all lowercase letters of the English alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
