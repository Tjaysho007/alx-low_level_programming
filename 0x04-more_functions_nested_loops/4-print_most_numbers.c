#include<stdio.h>
#include "main.h"

/**
*print_most_numbers - function to print numbers except 2 an*d 4
*
*Returns: returns nothing
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48 ; n < 47 ; n++)
	{
		if ((n == 50) && (n == 4))
		{
			continue;
		}
			putchar(n);

	}

	putchar(10);
}


