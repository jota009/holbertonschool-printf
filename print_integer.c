#include "main.h"
#include <limits.h>

/**
 * print_integer - Prints an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */

int print_integer(int n)
{
	int char_len = 0;
	char buffer[20];
	int i = 0;

	if (n < 0)
	{
		char_len += _putchar('-');
		n = -n;
	}

	do

	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (n > 0);

	while (i > 0)
	{
		char_len += _putchar(buffer[--i]);
	}

	return (char_len);
}
