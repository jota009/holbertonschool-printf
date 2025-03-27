#include <stdlib.h>
#include <unistd.h>

/**
 * print_string - Prints a string.
 * @str: String pointer
 *
 * Return: Number of characters printed on success, -1 otherwise
 */

int print_string(const char *str)
{
	const char *null_string = "(null)";
	int len = 0;
	int ret;

	if (str == NULL)
	{
		str = null_string;
	}
	while (*str != '\0')
	{
		ret = write(STDOUT_FILENO, str++, 1);
		if (ret == -1)
		{
			return (-1);
		}
		len += ret;
	}

	return (len);
}
