#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (sucess)
*/

int main(void)
{
	char low;
	char high;

	for (low = 'a'; low <= 'z' ; low++)
		putchar(low);

	for (high = 'A'; high <= 'z' ; high++)
		putchar(high);
	putchar('\n');

	return (0);
}
