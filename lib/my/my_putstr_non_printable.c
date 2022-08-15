#include "my.h"

int	my_putstr_non_printable(char const *str)
{
	int i = 0;
	int nb_char = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 31)
		{
			nb_char += my_putchar('\\');
			nb_char += my_putnbr_base((int)str[i], "01234567");
		}
		else
		{
			nb_char += my_putchar(str[i]);
		}
		i++;
	}

	return (nb_char);
}