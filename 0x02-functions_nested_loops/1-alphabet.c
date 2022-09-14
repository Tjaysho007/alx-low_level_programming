#include "main.h"

/**
* main - function to print alphabet
*
* Description: function that prints alphabet
*
* Return 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
