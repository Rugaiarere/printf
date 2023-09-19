#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
		va_list list, char buffer[], int flags, int width, int precision, int size);
int print_ch(va_list list1, char buffer[],
		int flags, int width, int precision, int size);
int print_str(va_list list1, char buffer[],
		int flags, int width, int precision, int size);
int print_per(va_list list1, char buffer[],
		int flags, int width, int precision, int size);
int handle_ch(char c, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[],
int flags, int width, int precision, int length, char padd, char extra_c);
long int convert_size_number(long int num, int size);
int is_digit(char);
#endif
