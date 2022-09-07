#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"

char *my_append_str(char const *str1, char const *str2)
{
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	char *new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	if (str1 != NULL && str2 != NULL)
	{
		my_memcpy(new_str, str1, len1);
		my_memcpy(new_str + len1, str2, len2 + 1);

		return (new_str);
	}
	free(new_str);

	return (NULL);
}