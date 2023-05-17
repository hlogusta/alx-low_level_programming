#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - character function.
 * @s: input argument.
 * @accept: input argument.
 * Return: character.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
