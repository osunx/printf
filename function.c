#include "main.h"

/**
 * my_printf - Custom implementation of printf.
 * @format: A string containing the format specifier.
 * Return: None (void)
 */
void my_printf(const char *format, ...)
{
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
customPrint("%c", va_arg(args, int));
break;
case 's':
customPrint("%s", va_arg(args, char *));
break;
case '%':
customPrint("%%");
break;
default:
customPrint("%%%c", *format);
}
}
else
{
customPrint("%c", *format);
}
format++;
}
va_end(args);
}
