#include <string.h>

/**
 * _memcpy - observed function.
 * @dest: input argument.
 * @src: input argument.
 * @n: input argument.
 * Return: character.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
