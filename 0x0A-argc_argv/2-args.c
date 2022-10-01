#include<stdio.h>

/**
 * main - A function that prints all arguments it receives
 * @argc: parameter
 * @argv:an array of command line
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
