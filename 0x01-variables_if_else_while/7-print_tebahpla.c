#include <stdio.h>

/**
 * main - program that prints lowercase alphabets in reverse
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	{
		putchar(le);
	}
	putchar('\n');
	return (0);
}
