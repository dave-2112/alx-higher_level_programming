#include "main.h"

/**
 * _isupper - cjecks for uppercase letters
 *
 * @c: letter to be checked
 *
 * Return: 1 (sucess) 0 (failure)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
