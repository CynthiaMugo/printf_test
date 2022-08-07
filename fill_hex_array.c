#include "main.h"

/**
 * fill_hex_array -> writes the char c to stdout
 * @bnr: array where is stored in the binary
 * @hex: array where the hexadecimal is stored
 * @isupp: integer that determines the hex array
 * in uppercase or lowercase letter
 * @limit: size of hex
 * Return: binary array
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int op, i, j, toletter;

	hex[limit] = '\0';
	if (isupp)
		toletter = 55;
	else
		toletter = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hex[i / 4] = op + 48;
		else
			hex[i / 4] = op + toletter;
	}
	return (hex);
}
