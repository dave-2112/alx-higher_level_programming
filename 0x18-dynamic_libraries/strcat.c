#include "main.h"

/**
 * _strcat - concatenates tw strings
 * @dest: destination
 * @src: sorce
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	c = 0;
	while (dest[c])
		c++;

	i = 0;
	while (src[i])
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	return (dest);
}
