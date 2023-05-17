#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - observed function.
 * @dest: input argument.
 * @src: input argument.
 * @n: input argument.
 * Return: character.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
