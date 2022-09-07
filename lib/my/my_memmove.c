#include <stddef.h>
#include <stdio.h>

#include "my.h"

void *my_memmove(void *dest, const void *src, size_t n)
{
	char *dest_str = (char *)dest;
	char *src_str = (char *)src;
	long *dest_long = (long *)dest;
	long *src_long = (long *)src;

	if (dest > src)
	{
		while (n % sizeof(long) != 0)
		{
			n--;
			dest_str[n] = src_str[n];
		}
		for (size_t i = n / sizeof(long); i > 0; i--)
		{
			dest_long[i - 1] = src_long[i - 1];
		}
	}
	else
		my_memcpy(dest, src, n);

	return (dest);
}
