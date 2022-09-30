#include <stdio.h>

/**
 * main -> a fuction that prints it's name
 * @argc: argc parameter
 * @argv:an array of a command line
 * Return: 0 success
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

