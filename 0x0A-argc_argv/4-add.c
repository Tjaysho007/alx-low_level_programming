#include<stdio.h>
#include<stdlib.h>

/**
 * main - A function that adds positive  numbers
 * @argc: parameter
 * @argv:an array of command line
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int res = 0, num, i, j, k;

	for  (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");

				return (1);
			}


		}


	}
		{
			for (k = 1; k < argc; k++)
			num = atoi(argv[k]);
			res += num;
		}
		printf("%d\n", res);
		return (0);


}
