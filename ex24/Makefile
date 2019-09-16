# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobbin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 15:48:48 by trobbin           #+#    #+#              #
#    Updated: 2019/06/17 19:25:19 by trobbin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(addprefix srcs/,$(SOURCE))
INCLUDE = -Iincludes
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
SOURCE = $(addsuffix .c, $(FUNCTIONS))

all: $(NAME)

binary:
	@gcc -Wall -Wextra -Werror -c $(SRC) $(INCLUDE)

$(NAME): binary
	@ar rc $(NAME) $(addsuffix .o,$(FUNCTIONS))
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(addsuffix .o,$(FUNCTIONS))

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
