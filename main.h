#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <stddef.h>

/**
* _printf - function for printing
* @format: formated string to be printed
* @...: list of arguments
* Return: strings to be printed
*/

int _mputchar(char mwrite);
int _printf(const char *format, ...);
#endif
