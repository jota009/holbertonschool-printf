#include "main.h"
#include <unistd.h>

/**
 * _printf - Produces output according to a format
 * @format: Character string
 *
 * Return: Output according to formar specifier
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int char_len = 0;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			char_len += output_cases(format, ap);
		}
		else
			char_len += write(STDOUT_FILENO, &(*format), 1);
		format++;
	}
	va_end(ap);
	return (char_len);
}
