/*
 * File: 2-print_alphabet.c
 * Auth: Stacey G Hlophe
 */

#include <stdio.h>

/**
 * main-Prints the alphabet in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char lower;
		for (lower = 'a'; lower <= 'z'; lower++)
			putchar(lower);
	putchar('\n');
	return (0);
}
