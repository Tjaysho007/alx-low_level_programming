#include<stdio.h>

/**
 *main - print alphabets
*
*Description: a progarm that prints lower case alphabet
*
*Return: 0
*/

int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)

	{

	if (lower != 'q'  &&  lower != 'e')
	{
		putchar(lower);
	}
	}
	putchar('\n');

	return (0);
}
