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
	char per_di[20]; 

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
			g_strint_cnt++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				_mputchar(*format);
				g_strint_cnt++;
			}
			else if (*format == 'c')
			{
				_mputchar(va_arg(m_list, int));
				g_strint_cnt++;
			}
			else if (*format == 's')
			{
				int len = _length_m(va_arg(m_list, char*));

				g_strint_cnt += len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int d_num = va_arg(m_list, int);
				snprintf(per_di, sizeof(per_di), "%d", d_num);
				write(1, per_di, strlen(per_di));
				g_strint_cnt += strlen(per_di);
			}	
		}
		format++;
	}
	va_end(m_list);
	return (g_strint_cnt);
}
