# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasonlam <jasonlam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:58:30 by jasonlam          #+#    #+#              #
#    Updated: 2024/07/20 01:26:12 by jasonlam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libft.a

INCLUDE	= libft.h
SRCS	= ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_isascii.c	\
			ft_memchr.c		\
			ft_isprint.c	\
			ft_strlen.c 	\
			ft_strchr.c		\
			ft_strrchr.c 	\
			ft_strncmp.c	\
			ft_memset.c 	\
			ft_memmove.c	\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_strlcpy.c	\
			ft_strlcat.c 	\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c

OBJS	= $(SRCS:.c=.o)
BONUS_S	= ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			ft_swap_bonus.c ft_islower_bonus.c ft_isupper_bonus.c \
			ft_iscntrl_bonus.c ft_isgraph_bonus.c ft_ispunct_bonus.c \
			ft_isspace_bonus.c ft_isblank_bonus.c ft_isxdigit_bonus.c \
			ft_putchar_bonus.c ft_putstr_bonus.c ft_putendl_bonus.c \
			ft_putnbr_bonus.c ft_sqrt_bonus.c ft_strcmp_bonus.c \
			ft_strcpy_bonus.c ft_strncpy_bonus.c ft_strstr_bonus.c \
			ft_strcat_bonus.c ft_strncat_bonus.c ft_strndup_bonus.c
BONUS_O	= $(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

# # bonus:		$(NAME) $(BONUS_O)
# 			$(LIB1) $(NAME) $(BONUS_O)
# 			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus