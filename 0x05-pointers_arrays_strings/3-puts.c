#include "main.h"

/**
 * _puts - prints string followed bt a new line
 * @str: input string
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
