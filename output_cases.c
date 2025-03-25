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
	int len = 0;
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
			len += _putchar('%');
			break;
		case '\0':
			return (-1);
		default:
			char_len += _putchar('%');
			char_len += write(STDOUT_FILENO, &(*format), 1);
			break;
	}
	return (char_len);
}

