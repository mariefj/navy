NAME	=	libmy.a

SRCS	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_abs.c			\
		my_get_digits.c			\
		my_is_prime.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_show_word_array.c		\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_str_to_word_array.c		\
		my_strupcase.c			\
		my_swap.c			\
		my_showaddr.c			\
		is_digit.c			\
		print_str_array.c		\
		my_append_c.c			\
		my_tab_size.c			\
		free_str_tab.c			\
		my_putnbr_base.c		\
		my_putnbr_base_unsigned.c	\
		my_putstr_non_printable.c	\
		my_itoa.c			\
		my_pow.c			\
		convert_char_to_binary.c	\
		convert_str_to_binary.c		\
		convert_binary_to_char.c	\
		convert_binary_to_str.c		\
		get_next_line.c			\
		my_memcpy.c			\
		my_memmove.c			\
		my_append_c_no_free.c		\
		my_append_str.c


OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-g -Wall -Werror -W -Wextra

CC	=	gcc

AR	=	ar cr

RM	=	rm -rf

all: clean fclean $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all debug test clear fclean re