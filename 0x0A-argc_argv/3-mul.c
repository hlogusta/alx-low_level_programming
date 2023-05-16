#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @p: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *p)
{
	int j, b, n, len, f, num;

	j = 0;
	b = 0;
	n = 0;
	len = 0;
	f = 0;
	num = 0;

	while (p[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (p[j] == '-')
			++b;

		if (p[j] >= '0' && p[j] <= '9')
		{
			num = p[j] - '0';
			if (b % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (p[j + 1] < '0' || p[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (n);
}


/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument array.
 * @s1: first number.
 * @s2: second number
 * @equal: multiplication of s1 and s2.
 * Return: 1(Error) and 0(Success).
 */

int main(int argc, char *argv[])
{
	int s1, s2, equal;

	  if (argc < 3 || argc > 3)
        {
                printf("Error\n");

		return (1);
	}
	
	s1 = _atoi(argv[1]);
	s2 = _atoi(argv[2]);
	equal = s1 * s2;

	printf("%d\n", equal);
	
	return (0);	
}
