# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 15:52:28 by llucente          #+#    #+#              #
#    Updated: 2021/07/02 15:52:28 by llucente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = ./
GNL = ./

SRCS = ft_atoi.c \
		ft_isdigit.c \
	    ft_itoa.c \
	    ft_strcmp.c \
	    ft_strchr.c \
	    ft_strdup.c \
	    ft_strstr.c \
	   	get_next_line.c \
	   	ft_count.c\
	   	ft_lstadd.c \
	  	ft_lstnew.c \
	  	ft_strcpy.c \
	    ft_strjoin.c \
	    ft_strlen.c \
	    ft_strnew.c \
	   	ft_bzero.c \
	   	ft_strcat.c \
	   	ft_memalloc.c \
	  	ft_memcpy.c \
	#    ft_delim_count.c \
	#    error_exit.c \
	#    ft_isalnum.c \
	#    ft_isalpha.c \
	#    ft_isascii.c \
	#    ft_isprint.c \
	#    ft_itoa_base.c \
	#    ft_lstcount.c \
	#    ft_lstdel.c \
	#    ft_lstdelone.c \
	#    ft_lstiter.c \
	#    ft_lstmap.c \
	#    ft_memccpy.c \
	#    ft_memchr.c \
	#    ft_memcmp.c \
	#    ft_memdel.c \
	#    ft_memmove.c \
	#    ft_memset.c \
	#    ft_putchar.c \
	#    ft_putchar_fd.c \
	#    ft_putwchar.c \
	#    ft_putendl.c \
	#    ft_putendl_fd.c \
	#    ft_putnbr.c \
	#    ft_putnbr_fd.c \
	#    ft_putstr.c \
	#    ft_putstr_fd.c \
	#    ft_putnstr.c \
	#    ft_putwstr.c \
	#    ft_strcapitalize.c \
	#    ft_strlcat.c \
	#    ft_strclr.c \
	#    ft_strdel.c \
	#    ft_strequ.c \
	#    ft_striter.c \
	#    ft_striteri.c \
	#    ft_strjoin_free.c \
	#    ft_strwlen.c \
	#    ft_strmap.c \
	#    ft_strmapi.c \
	#    ft_strncat.c \
	#    ft_strncmp.c \
	#    ft_strncpy.c \
	#    ft_strnequ.c \
	#    ft_strnstr.c \
	#    ft_strrchr.c \
	#    ft_strrev.c \
	#    ft_strrotate.c \
	#    ft_strsplit.c \
	#    ft_strsub.c \
	#    ft_strtrim.c \
	#    ft_strtolower.c \
	#    ft_strtoupper.c \
	#    ft_strunicode.c \
	#    ft_tolower.c \
	#    ft_toupper.c \
	#    ft_unicode.c \
	#    ft_utoa_base.c \

FLAGS = -Wall -Werror -Wextra -g

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

%.o: %.c
	gcc -c -I $(HEAD) -I $(GNL) $(FLAGS) $(SRCS)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
