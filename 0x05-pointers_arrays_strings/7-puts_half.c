#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a half of a string
 * @str: parameter
 */

void puts_half(char *str)
{
	int l, i;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		i = l / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (l % 2 != 0)
	{
		i = (l - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
