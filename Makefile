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

NAME		:= so_long.a
CC 			:= cc
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -f
SRCS	:= 
OBJS	:= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
