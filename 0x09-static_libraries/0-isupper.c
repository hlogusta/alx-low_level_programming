#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - observed function.
 * @c: input argument.
 * Return: integer.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
