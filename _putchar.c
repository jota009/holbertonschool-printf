#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: input character
 *
 * Return: On success 1
 * -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

