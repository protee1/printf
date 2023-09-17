#include "main.h"

/**
 * put_s - prnt string
 * @c: string
 * Return number of bytes.
 */
int put_s(char *c)
{
	int count = 0;

	if (c)
	{
		for (count =0; c[count] != '\0'; count++)
		{
			put_chars(c[count]);
		}
	}
	return (count);
}
