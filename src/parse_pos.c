#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "my.h"
#include "parse_pos.h"

// my_struct_single_pos_t **board = malloc(8 * sizeof(my_struct_single_pos_t*))
// my_struct_single_pos_t *lign = malloc(8 * sizeof(my_struct_single_pos_t))

char *read_pos_boats(char *file)
{
	int fd;
	char *str = NULL;
	char *str_file = (char *)malloc(8 * sizeof(char));
	char *temp;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit(84);

	str_file[0] = '\0';
	while ((str = get_next_line(fd)))
	{
		temp = my_append_str(str_file, str);
		free(str_file);
		str_file = temp;
		free(str);
	}
	close(fd);

	return (str_file);
}

my_struct_single_pos_t	*init_line()
{
	int i = 0;
	my_struct_single_pos_t *line = (my_struct_single_pos_t *)malloc(SIZE_BOARD * sizeof(my_struct_single_pos_t));

	if (line == NULL)
		return (NULL);

	while (i < SIZE_BOARD)
	{
		line[i].sign = '.';
		i++;
	}

	return (line);
}

void	display_line(my_struct_single_pos_t *line)
{
	int i = 0;

	while (i < SIZE_BOARD)
	{
		printf(" %c ", line[i].sign);
		i++;
	}
	printf("\n");
}

my_struct_single_pos_t	**init_board()
{
	int i = 0;
	my_struct_single_pos_t **board = (my_struct_single_pos_t **)malloc(SIZE_BOARD * sizeof(my_struct_single_pos_t*));

	if (board == NULL)
		return (NULL);

	while (i < SIZE_BOARD)
	{
		board[i] = init_line();
		i++;
	}

	return (board);
}

void	display_board(my_struct_single_pos_t **board)
{
	int i = 0;

	printf("  | A  B  C  D  E  F  G  H\n");
	printf(" -+-----------------------\n");
	while (i < SIZE_BOARD)
	{
		printf(" %d|", i + 1);
		display_line(board[i]);
		i++;
	}
	printf("\n");
}

my_struct_single_pos_t **fill_pos(my_struct_single_pos_t **board, char *pos, char sign)
{
	int i_column = pos[0] - 'A';
	int i_line = pos[1] - '1';

	board[i_line][i_column].sign = sign;

	return (board);
}
