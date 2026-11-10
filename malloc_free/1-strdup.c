#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails or str = NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
