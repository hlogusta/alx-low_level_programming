#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - observed function.
 * @s: input argument.
 * @accept: input argument.
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
