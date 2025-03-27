# holbertonschool-printf

C - printf

Group project. Write your own printf function

Description 

In programming, printf is a function used to print formatted output to the console, allowing you to display text, numbers, and other data types in a controlled manner. It's a fundamental tool for interacting with users and debugging programs. This is a group project between to people with the objective to write our own printf function.

Functions
 
Can only use authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Function Prototypes

int _printf(const char *format, ...);
Formats and prints data according to the specified format string.
int output_cases(const char *format, va_list ap);
Handles different format specifiers and outputs the corresponding data.
int print_string(const char *str);
Prints a string to the standard output.
int _putchar(char c);
Writes a single character to the standard output.
int handle_percent(void);
Handles the percent sign in the formt string.
int print_integer(int n);
Prints an integer to the standard output.

Examples

 _printf("Hello, %s!\n", "world");
 _printf("Number: %d\n", 42);

WEBSITE
https://github.com/AngelD89
https://github.com/jota009
