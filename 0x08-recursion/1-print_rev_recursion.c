#include "main.h"
/**
 * _rev_recursion - function that prints a string in reverse
 * @s: String in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{       
        if (*s == '\0')
        {       
                return;
        }       
        s++;
        _print_rev_recursion(s);
	s--;
	_putchar(*s);
}
