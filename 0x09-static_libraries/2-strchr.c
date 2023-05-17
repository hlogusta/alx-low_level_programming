#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - observed function.
 * @s: input argument.
 * @c: input argumnet.
 * Return: character.
 */
char *_strchr(char *s, char *c)
{
	return (strchr(s, c));
}
