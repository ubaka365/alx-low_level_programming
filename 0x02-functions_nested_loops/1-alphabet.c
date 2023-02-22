#include "main.h"

/**
 * print _alphabet - prints alphabet in lower case
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
