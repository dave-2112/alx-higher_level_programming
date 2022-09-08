#include "main.h"

/**
 * _strcpy - copies the content of a str to another
 * @dest: destination
 * @src: source
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (src);
}
