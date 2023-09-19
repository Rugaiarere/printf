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
int handle_integer_binary(char *buffer, const char specifier, va_list args);
char *_utoa(unsigned long value, char *str, int base);
char *_toUpper(char *c);
char *_itoa(int value, char *str);
char *_strchr(const char *s, int c);
int _strlen(char *str);
#endif
