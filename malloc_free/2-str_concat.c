#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated space in memory containing
 *         s1 followed by s2, and null terminated, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			concat[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (j = 0; j < len2; j++)
			concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
