#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int checker(const char *format, va_list args);
int p_char(va_list);
int p_string(va_list args);
int p_percent(va_list);
int print_number(va_list);
int print_unsigned_number(va_list args);
int p_integer(va_list);

#endif
