#include "main.h"

/**
 * _isdigit - cjecks for uppercase letters
 *
 * @c: character to be checked
 *
 * Return: 1 (sucess) 0 (failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
