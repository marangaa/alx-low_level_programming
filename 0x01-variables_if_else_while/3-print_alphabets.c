#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 * description: prints the alphabets
 * Return: (0) Success
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
