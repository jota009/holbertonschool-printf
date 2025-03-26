#include "main.h"
#include <unistd.h>

/**
 * output_cases - Handles output cases to print when specified by format
 * @format: Character string
 * @ap: Argument pointer
 *
 * Return: output case use in character string
 */

int output_cases(const char *format, va_list ap)
{
	int char_len = 0;

	switch (*format)
	{
		case 'c':
			char_len += _putchar(va_arg(ap, int));
			break;
		case 's':
			char_len += print_string(va_arg(ap, char *));
			break;
		case '%':
			char_len += handle_percent();
			break;
		case '\0':
			return (-1);
		default:
			char_len += handle_percent();
			char_len += _putchar(*format);
			break;
	}
	return (char_len);
}
