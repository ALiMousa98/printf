#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "_putchar.c"

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_integer(va_list args);
void _recursion_integer(int a);
int _validate_char(char _type);

#endif
