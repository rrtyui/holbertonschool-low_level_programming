#include "main.h"
/**
* _strlen - return the length of a string
* @s: parameterer
* Return: l
*/

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
