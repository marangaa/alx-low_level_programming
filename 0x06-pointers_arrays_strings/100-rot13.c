#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *s)
{
	int i = 0;

        /* You do this until you find a '\0' */
        for( i = 0; s[i] != '\0' ; i++ )
	{
		/* Use the pointer notation if you passed a pointer. */
		/* If the letter is between a and m you can simply  sum it. */
		if( *(s + i ) >= 'a' && *(s + i ) < 'n')
			*(s + i ) += 13;
		/* If the letter is between the n and z you have to do the opposite.*/
		else if(*(s + i ) >= 'n' && *(s + i ) <= 'z')
			*(s + i ) -= 13;
        }
	return (s);
}
