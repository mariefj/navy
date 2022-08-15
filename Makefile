NAME	=	navy

SRCS	=	src/main.c		\
		src/handlers.c		\
		src/manage_sig.c	\
		src/share_pid.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-g -g3 -Wall -Werror -W -Wextra -I./include -I./lib/my

LDFLAGS	=	-L./lib/my -lmy

CC	=	gcc

RM	=	rm -rf

all: clean fclean $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all debug test clear fclean re