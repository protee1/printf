#include "main.h"

/**
 * put_chars - prints character.
 * @c: character to print.
 * Return: 1
 */
int put_chars(char c)
{
	return (write(1, &c, 1));
}
