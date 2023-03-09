#include "main.h"
#include <unistd.h>
/*
 * _putchar - gives characters on output system.
 * @c: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
