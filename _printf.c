#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *str;
    char ch;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    ch = (char)va_arg(args, int);
                    _putchar(ch);
                    count++;
                    break;
                case 's':
                    str = va_arg(args, char*);
                    while (*str)
                    {
                        _putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return (count);
}
