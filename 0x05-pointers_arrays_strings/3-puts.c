#include "main.h"
/**
 * _puts - printers a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		_putchar('\n');
}
