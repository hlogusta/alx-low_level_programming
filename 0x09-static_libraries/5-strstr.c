#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - string to string.
 * @haystack: input argument.
 * @needle: input argument
 * Return: character coded.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
