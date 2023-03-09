#include "main.h"

/*
 * _puts_recursion - prints a string.
 * @s - String
 * Return: String
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		return _puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
