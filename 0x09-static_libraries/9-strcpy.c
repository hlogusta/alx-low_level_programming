#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - observed function.
 * @dest: input argument.
 * @src: input argument.
 * Return: character.
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
