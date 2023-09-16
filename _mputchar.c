#include <unistd.h>

/**
 * _mputchar - writes the character c to stdout
 * @mwrite: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _mputchar(char mwrite)
{
	return (write(1, &mwrite, 1));
}
