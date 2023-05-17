#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - observed function.
 * @s: input argument.
 * @b: input argument.
 * @n: input argument.
 * Return: character.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
