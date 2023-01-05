#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: pointer to string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	while (*s = !'\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
