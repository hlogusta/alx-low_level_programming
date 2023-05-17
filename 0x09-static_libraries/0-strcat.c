#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - observed function.
 * @dest: input argument.
 * @src: input argument.
 * Return: character.
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
