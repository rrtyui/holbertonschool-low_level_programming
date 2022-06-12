#include "main.h"
#include <stdio.h>

/**
* print_square - print lines in terminal
* @size: size of the square
*/

void print_square(int size)
{
	int l, c;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			l = size;

			while (l == size)
			{
				_putchar('#');

				l++;
			}

			_putchar('#');


		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}