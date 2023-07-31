#include <string.h>
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, sizeof(char) * n);

	return (dest);
}
