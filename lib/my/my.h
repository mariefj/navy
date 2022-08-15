#ifndef _MY_H_
#define _MY_H_

int	my_putchar(char c);
int	my_abs(int nb);
int	my_pow(int nb, int p);
int	my_get_digits(int nb);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
char	*my_itoa(unsigned int nb, char **str);
void	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_sort_int_array(int *array, int size);
int	my_compute_power_rec(int nb, int p);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *str);
char	*my_strncpy(char *dest, char const *str, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
int	my_showaddr(char const *str);
int	my_putnbr_base(int nbr, char const *base);
int	my_putnbr_base_unsigned(unsigned int nbr, char const *base);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
char	*my_strdup(char const *str);
int	my_show_word_array(char * const *tab);
char	**my_str_to_word_array(char const *str);
int	print_str_array(const char **array);
int	is_digit(char digit);
char	*my_append_c(char *str, char c);
int	my_tab_size(const char **array);
void	free_str_tab(char **array);
int	my_putstr_non_printable(char const *str);
char	convert_binary_to_char(char *b);
char	*convert_binary_to_str(char *str);
char	*convert_char_to_binary(unsigned char c);
char	*convert_str_to_binary(char *str);

#endif
