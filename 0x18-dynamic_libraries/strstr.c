#include "main.h"

/**
* _strstr - function that locates a substring.
* @haystack: pointer to string
* @needle: pointer to string
* Return: pointer to the beginning of the located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
