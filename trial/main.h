#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_c(va_list args);
int handle_s(va_list args);

#endif
