#include "main.h"

/**
 * _abs - checks for an absolute number
 *
 * @n: number to check program.
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
