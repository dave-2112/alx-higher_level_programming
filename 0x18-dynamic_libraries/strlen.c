#include "main.h"

/**
 * _strlen - calculates the len of a string excluding the terminatin '\0' value
 *
 * @s: pointer to the string
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c])
	{
		c++;
	}
	return (c);
}
