#include "main.h"
/**
* puts_half - return the length of a string
* @str: parameterer
*/

void puts_half(char *str)
{
	int l = 0;

	int h;

	int n;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (n = ((l - 1) / 2) + 1; n < l; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}

	else
	{
		for (h = (l / 2) + 1; h < l; h++)
		{
			_putchar(str[h]);
		}
	_putchar('\n');
	}
}
