# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 17:34:30 by aperez-b          #+#    #+#              #
#    Updated: 2021/03/18 10:27:12 by aperez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = ft_atoi.c main.c map.c solve.c twodim_arr.c stdin.c
HEADERS = bsqlib.h
OBJS = $(SRCS:.c=.o)
CC	= cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -I $(HEADERS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	
	clean
	fclean
	all
	re
