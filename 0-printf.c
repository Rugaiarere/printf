#include "main.h"

/**
* _printf - printf function
* @format: the type of character
*
* Return: the character
*/

int _printf(const char *format, ...)
{
	int i;
	va_list op;

	i = 0;
	if (format == NULL)
		return (-1);

	va_start(op, format);

	while (*format != '\0')//_printf("% ")
	{
		if (*format != '%')
		{
			i += write(1, format, 1);
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			else if (*format == 'c')
			{
				char c = va_arg(op, int);

				i += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *s = va_arg(op, char*);

				i += write(1, s, strlen(s));
			}
			else if (*format == '%')
				i += write(1, format, 1);

		}
		format++;
	}
va_end(op);
return (i);
}

