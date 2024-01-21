# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 18:51:48 by aubertra          #+#    #+#              #
#    Updated: 2024/01/20 19:57:06 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = ./includes

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	cc -Wall -Werror -Wextra $(OBJS) $(NAME) -I $(INCLUDES)

.c.o:
	cc -Wall -Wextra -Werror -c $^

clean:
	rm $(OBJS)
	
fclean: clean
	rm $(NAME)
	
re: fclean all


	