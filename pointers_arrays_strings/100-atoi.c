#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert
 *
 * Return: The integer value of the converted string, or 0 if no numbers.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 - (s[i] - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	if (sign > 0)
	{
		return (-res);
	}
	return (res);
}
