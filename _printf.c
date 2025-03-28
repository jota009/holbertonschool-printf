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
	{
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
			{
				char_len += _putchar('%');
			}
			else
			{
				char_len += output_cases(format, ap);
			}
		}
		else
		{
			char_len += _putchar(*format);
		}
		format++;
	}

	va_end(ap);
	return (char_len);
}

/**
 * handle_percent - Prints a single percent sign
 *
 * Return: 1 (the number of characters printed)
 */

int handle_percent(void)
{
	return (_putchar('%'));
}
