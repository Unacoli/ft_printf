# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/08/26 17:17:08 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
INCLUDE = ./ft_printf/include/
CFLAGS	+= -g -Wall -Werror -Wextra

SRCS	= ./srcs/ft_flag_c.c ./srcs/ft_flag_pourcent.c ./srcs/ft_printf.c\
		./srcs/ft_flag_diu.c ./srcs/ft_flag_s.c ./srcs/ft_flag_p.c\
	   	./srcs/ft_flag_x.c

SRCS_BONUS	=

OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

bonus:

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
