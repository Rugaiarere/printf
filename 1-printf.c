#include "main.h"


/**
 * _printf - custom printf() to print formatted strings to stdout
 * description:a function that produces output according to a format.
 * @format: format string to be printed
 * Return: 0 if successful and -1 on error
 */

int _printf(const char *format, ...)
{
	unsigned int num_of_characters, _str_length;
	va_list list_of_args;
	char character;

	num_of_characters = 0;
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(list_of_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			num_of_characters++;
		}
		else
		{
			format++;
			if (*format == ' ')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				num_of_characters++;
			}
			else if (*format == 'c')
			{
				character = va_arg(list_of_args, int);
				write(1, &character, 1);
				num_of_characters++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);

				if (str == NULL)
				{
					write(1, "(null)", 6);
					num_of_characters += 6;
				}
				else
				{
					_str_length = 0;

					while (str[_str_length] != '\0')
					{
						write(1, &str[_str_length], 1);
						_str_length++;
					}
					num_of_characters += _str_length;
				}
		}
		}
		format++;
	}
		va_end(list_of_args);
	return (num_of_characters);
}
