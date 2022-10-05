#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - a pointer to newly allocated space in memory
 * @str:memeory of the new string
 * Return:string
 */
char *_strdup(char *str)
{
	char *dsti;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dsti = (char *) malloc(size * sizeof(char));

	if (dsti == 0)
	{
		return (NULL);
	}
	_strcpy(dsti, str);

	return (dsti);
}
