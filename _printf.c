#include "main.h"

/**
* customPrint - Prints formatted output to stdout using
* a variable argument list.
*
* @format: A string containing the format specifier.
* The format string is composed of zero or more directives.
* See man 3 printf for more details on the format specifiers.
* @...: Additional arguments that correspond to the format
* specifiers in the format string.
*
* Description:
* This function is a custom implementation of the printf function.
* It takes a format string and variable arguments and prints the
* formatted output to stdout.
* The function uses the vprintf function from the standard C
* library to handle the variable arguments.
*
* Return: None (void)
*/
void customPrint(const char *format, ...)
{
va_list args;
va_start(args, format);
vprintf(format, args);
va_end(args);
}
