# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/02/05 14:25:44 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
INCLUDE = ./include
CFLAGS	+= -Wall -Werror -Wextra

SRCS		= ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_substr.c\
		 	ft_atoi.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c\
		 	ft_strlcpy.c ft_tolower.c ft_isdigit.c ft_memmove.c\
		 	ft_strlen.c ft_toupper.c ft_bzero.c ft_isprint.c\
		 	ft_memset.c ft_putstr_fd.c ft_strmapi.c ft_calloc.c ft_itoa.c\
		 	ft_split.c ft_strncmp.c ft_putchar_fd.c ft_strchr.c ft_strnstr.c\
		 	ft_memccpy.c ft_putendl_fd.c ft_strdup.c ft_strrchr.c ft_isalnum.c\
		 	ft_memchr.c ft_strjoin.c ft_strtrim.c\
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		 	ft_lstmap.c ft_atoi_base.c ft_check_base.c\
			ft_convert_base.c ft_isinbase.c ft_isspace.c\
			ft_itoa_base.c ft_putchar.c ft_putnbr_base.c\
			ft_putnbr.c ft_putstr.c ft_strchrnul.c ft_printf.c

OBJS		= $(SRCS:.c=.o)
RM		= rm -f

all:	$(NAME)

$(NAME):
	@gcc -g $(CFLAGS) -I $(INCLUDE) -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
		$(RM) $(OBJ) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
