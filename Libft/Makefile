# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shmiyosh <shmiyosh@student.42tokyo.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 07:22:25 by shmiyosh          #+#    #+#              #
#    Updated: 2025/04/25 07:36:18 by shmiyosh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
CC 			:= cc
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -f
SRCS	:= ft_isdigit.c	ft_memcpy.c ft_split.c  ft_strlen.c ft_tolower.c ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_isalnum.c     ft_putendl_fd.c    ft_strjoin.c     ft_strrchr.c   ft_substr.c ft_isalpha.c     ft_memchr.c        ft_putnbr_fd.c   ft_strlcat.c   ft_strtrim.c ft_isascii.c     ft_memcmp.c        ft_putstr_fd.c   ft_strlcpy.c ft_calloc.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_toupper.c
BONUS_SRCS := ft_lstiter.c	ft_lstlast.c	ft_lstmap.c	ft_lstadd_back.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstclear.c ft_lstdelone.c
OBJS	:= $(SRCS:.c=.o)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

ifeq ($(filter bonus,$(MAKECMDGOALS)), bonus)
	SRCS += $(BONUS)
	OBJS += $(BONUS_OBJS)
endif

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
