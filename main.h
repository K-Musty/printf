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
 * @output: each format representative
 * @funct: function of format
 *
 */
typedef struct ouputt
{
	char output;
	int (*funct)(va_list);
} outputt_t;

int _putchar(

int _printf(const char *format, ...);

#endif
