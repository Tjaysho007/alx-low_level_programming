#include<stdio.h>

/**
*main - print upper and lowwer case alphabet
*
*Description: using the main function
*
*Return: 0
*/

int main(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);

	}
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);

	}
	putchar('\n');

	return (0);
}
