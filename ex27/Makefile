# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobbin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 11:18:57 by trobbin           #+#    #+#              #
#    Updated: 2019/09/11 11:19:01 by trobbin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FUNCTIONS = $(NAME)
SOURCE = $(addsuffix .c, $(FUNCTIONS))

all: $(NAME)

norm:
	norminette -R CheckForbiddenSourceHeader

binary:
	@gcc -Wall -Wextra -Werror -c $(SOURCE)

$(NAME): binary
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SOURCE)

clean:
	@/bin/rm -f $(addsuffix .o,$(FUNCTIONS))

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
