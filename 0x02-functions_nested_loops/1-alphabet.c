#include "main.h"

/**
 * main - prints the alphabet in lower case
 *
 * Return: returns null
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
