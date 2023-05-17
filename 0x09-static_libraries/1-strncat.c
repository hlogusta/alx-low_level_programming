#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - observed function.
 * @dest: input argument.
 * @src: input argument.
 * @n: input argument.
 * Return: character.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
