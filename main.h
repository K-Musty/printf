#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct outputt - Structure for each format output
 *
 * @format: each format representative
 * @funct: function of format
 *
 */
typedef struct ouputt
{
	char format;
	int (*funct)(va_list arr);
} outputt_t;

int _putchar(char c);

int _printf(const char *format, ...);

int _cool_printf_char(va_list arr);
int _cool_printf_str(va_list arr);
int _cool_printf_int(va_list arr);
int _cool_printf_perc(va_list arr);
unsigned int _ident(const char *format, va_list arr);
#endif
