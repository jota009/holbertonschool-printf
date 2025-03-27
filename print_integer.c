#include "main.h"

/**
 * print_integer - Prints an integer.
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */

int print_integer(int n)
{
	int char_len = 0;
	char buffer[20];
	int i = 0;
	unsigned int num;

	if (n < 0)
	{
		char_len += _putchar('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = n;
	}

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	while (i > 0)
	{
		char_len += _putchar(buffer[--i]);
	}

	return (char_len);
