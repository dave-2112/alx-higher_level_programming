#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Character to check
 *
 * Return: 1 (success) or 0 (failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
