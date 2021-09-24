# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/09/24 00:06:35 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
INCLUDE = ./ft_printf/include/
CFLAGS	+= -Wall -Werror -Wextra

SRCS	= ./srcs/ft_flag_c.c ./srcs/ft_flag_pourcent.c ./srcs/ft_printf.c\
		./srcs/ft_flag_diu.c ./srcs/ft_flag_s.c ./srcs/ft_flag_p.c\
	   	./srcs/ft_flag_x.c

OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

test: $(OBJS) main.o
	@cc $(CFLAGS) $(OBJS) main.o -I $(INCLUDE) -o test
	./test
	@rm test

norm:
	norminette $(SRCS)

.PHONY:	all clean fclean re test norm
