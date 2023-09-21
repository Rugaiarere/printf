#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
char character_handler(char);
int string_handler(char *);
int print_binary(unsigned int n);


int print_string(const char *str);
int print_hex(int value);
int print_integer(int num);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_unsigned_recursive(unsigned int num);
int print_octal_recursive(unsigned int num);
int print_custom_string(const char *s);
int print_binary(unsigned int num);
int print_pointer(void *ptr);
int print_hexadecimal(unsigned int num, int uppercase);
int print_binary_recursive(unsigned int num);

#endif
