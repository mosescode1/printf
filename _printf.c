#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - main function for printing
 * @format: strings to be printed out to stdio
 * @...: list of Rgument
 * Return: return number/ length of string
 */

int _printf(const char *format, ...)
{
	unsigned int g_strint_cnt;

	va_list m_list;

	g_strint_cnt = 0;

	if (format == NULL)
		return (-1);
	va_start(m_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			g_strint_cnt = 0;
		}
		else
		{
			format++;
			if (*format == '%')
				_mputchar(*format);
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				int g_c = va_arg(m_list, int);

				_mputchar(g_c);
				g_strint_cnt++;
			}
			else if (*format == 's')
			{
				const char *m_string_c = va_arg(m_list, const char*);

				_length_m(m_string_c);
				g_strint_cnt++;
			}
		}
		format++;
	}
	va_end(m_list);
	return (g_strint_cnt);
}
