/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: prints alphabets
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		i++;
	}
}
