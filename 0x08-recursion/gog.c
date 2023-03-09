#include "main.h"

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len += _strlen_recursion(s+1);
	}
	return (len);
}
