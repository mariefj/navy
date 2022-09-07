#ifndef _PARSE_POS_H_
#define _PARSE_POS_H_

#ifndef SIZE_BOARD
#define SIZE_BOARD 8

#endif

typedef struct	my_struct_single_pos_s
{
		char	sign;
}		my_struct_single_pos_t;

char	*read_pos_boats(char *file);

#endif // _PARSE_POS_H_