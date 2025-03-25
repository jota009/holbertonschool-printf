#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int output_cases(const char *format, va_list ap);
int print_string(const char *str);
int _putchar(char c);

#endif
