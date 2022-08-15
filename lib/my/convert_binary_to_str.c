#include <stdlib.h>

#include "my.h"

char *convert_binary_to_str(char *str)
{
	int i = 0;
	int len = my_strlen(str);
	char *binary_to_str = (char *)malloc(((len * sizeof(char)) / 8) + 1);
	char binary_to_char;

	if (binary_to_str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		binary_to_char = convert_binary_to_char(str);
		binary_to_str[i] = binary_to_char;
		i++;
		str += 8;
	}

	return(binary_to_str);
}