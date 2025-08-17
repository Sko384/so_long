# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shmiyosh <shmiyosh@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025-07-08 05:48:10 by shmiyosh          #+#    #+#              #
#    Updated: 2025-07-08 05:48:10 by shmiyosh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= so_long
CC 			:= cc
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -f
INC		:= -I source -I get_next_line -I Libft -I printf -I minilibx-linux
LIB 	:= -L Libft -lft -L printf -l:printf.a -L minilibx-linux -lmlx -lX11 -lXext -lm
SRCS 	:=	source/main.c \
			get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c \

OBJS	:= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(MAKE) -C Libft
	$(MAKE) -C printf
	$(MAKE) -C minilibx-linux
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	$(MAKE) -C Libft clean
	$(MAKE) -C printf clean
	$(MAKE) -C minilibx-linux clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C Libft fclean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
