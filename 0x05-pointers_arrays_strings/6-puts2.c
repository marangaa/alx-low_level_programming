#include "main.h"

/**
 * puts2 - prints every other character
 * @str: input string
 *
 * Description: prints every other character
 * Return: Always (0)
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
