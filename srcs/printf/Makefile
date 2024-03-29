# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 13:37:01 by rapcampo          #+#    #+#              #
#    Updated: 2023/10/24 13:37:03 by rapcampo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC	=	cc
CFLAGS	=	-Wextra -Werror -Wall
SRCS =	ft_printf.c ft_print_nbr.c 
OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f
LIBC	=	ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
