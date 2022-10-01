#include<stdio.h>

/**
 * main - A function that prints the number of arguments
 * @argc: parameter
 * @argv:an array of command line
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
