#include "main.h"

/*
 * _printf - main function for printing
 * @format: strings to be printed out to stdio
 * @...: list of Rgument
 * Return: return number/ length of string
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	va_list m_list;

	int g_strint-cnt = 0;
	va_start(m_list,format);

	while (*format)
	{
		if (*format != '%')
		{
			wrtie(1, &g_string, strlen(&g_string));
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (format == 'c')
			{
				int g-c = va_arg(m_list, int);
				write(1, &g-c, (strlen(&g-c) - 1));
				g_strint-cnt++;
			}
			else if (
		
