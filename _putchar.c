#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: input character
 *
 * Return: Character
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

