#include <stddef.h>

#include "my.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_str;
	const char *src_str;
	long *dest_long = dest;
	const long *src_long = src;

	while (n >= sizeof(long) * 4)
	{
		n -= sizeof(long) * 4;
		*dest_long++ = *src_long++;
		*dest_long++ = *src_long++;
		*dest_long++ = *src_long++;
		*dest_long++ = *src_long++;
	}
	while (n >= sizeof(long))
	{
		n -= sizeof(long);
		*dest_long++ = *src_long++;
	}
	dest_str = (char *)dest_long;
	src_str = (const char *)src_long;
	while (n--)
	{
		*dest_str++ = *src_str++;
	}

	return (dest);
}