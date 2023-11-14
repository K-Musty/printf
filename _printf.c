#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - outputs inputs
 * @format: the type of data type
 *
 * Return: always printed inputs
 */
int _printf(const char *format, ...)
{
	va_list arr;
	int k = 0, lens = 0;

	if (!format)
		return (-1);
	va_start(arr, format);
	while (format[k] != '\0')
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] != '\0')
			{
				lens += _ident(&format[k], arr);
			}
		}
		else
		{			
			_putchar(format[k]);
			lens++;
		}
		k++;
	}
	va_end(arr);
	return (lens);
}
