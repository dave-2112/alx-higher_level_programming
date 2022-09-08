#include "main.h"

/**
 * _puts - prints a string to the terminal
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	int c;
	char *p = str;

	c = 0;
	while (str[c])
	{
		_putchar(*p++);
		c++;
	}
	_putchar('\n');
}
