#include <stdlib.h>
#include "main.h"


char *create_array(unsigned int size, char c)
{
	char *arr;

	int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if  (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}