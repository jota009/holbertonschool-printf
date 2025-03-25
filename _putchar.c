#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character
 * @c: input character
 *
 * Return: Character
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

/**
 * handle_percent - Function that prints percent
 */

int handle_percent(void)
{
	return write(STDOUT_FILENO, "%", 1);
}
