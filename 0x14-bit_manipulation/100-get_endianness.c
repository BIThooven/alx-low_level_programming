#include "main.h"
#include <stdint.h>
/**
 * get_endianness - a function that checks if big endian or little endian
 * Return: 1 if little endian, 0 if big endian
*/
int get_endianness(void)
{
	uint32_t c;
	uint8_t *ptr;

	c = 0x01000000;
	ptr = (uint8_t *)&c;

	if (*ptr == 0x01)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
