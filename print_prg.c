#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes char c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: on success 1
 */

int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
