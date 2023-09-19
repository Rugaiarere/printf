#include "main.h"


/**
 * _printf - custom printf() to print formatted strings to stdout
 * description:a function that produces output according to a format.
 * @format: format string to be printed
 * Return: 0 if successful and -1 on error
 */

int _printf(const char *format, ...)
{
        unsigned int num_of_characters;
        int number;
        va_list list_of_args;
        char num_str[20];

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


 			 if (*format == 'd' || *format == 'i')
                        {
                                number = va_arg(list_of_args, int);
                                snprintf(num_str, sizeof(num_str), "%d", number);
                                write(1, num_str, strlen(num_str));
                                num_of_characters += strlen(num_str);
                        }
                        else
                        {
                                char err_msg[7];
                                int err_msg_len = snprintf(err_msg, sizeof(err_msg), "%%%c", *format);

                                write(1, err_msg, err_msg_len);
                                num_of_characters += err_msg_len;
                        }
		}
		format++;
	}
	va_end(list_of_args);
	return (num_of_characters);
}
