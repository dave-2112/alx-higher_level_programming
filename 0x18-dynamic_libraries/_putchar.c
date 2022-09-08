#include <unistd.h>

/**
 * _putchar - writes a character to the terminal
 * @c: The character to be written to the output
 *
 */
void _putchar(char c)
{
	write(1, &c, 1);
	return;
}
