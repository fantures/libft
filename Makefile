# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fantures <fantures@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 15:53:03 by fantures          #+#    #+#              #
#    Updated: 2023/05/05 19:58:19 by fantures         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Mandatory Functions#
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c\
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strncmp.c ft_memchr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_printf.c printtools.c

#Bonus Functions#
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	$(NAME)

$(NAME):	$(SRC:.c=.o)
		ar rc $(NAME) $(SRC:.c=.o)

bonus:	$(BONUS:.c=.o)
		ar rc $(NAME) $(BONUS:.c=.o)

clean:
			$(RM) $(SRC:.c=.o) $(BONUS:.c=.o)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re bonus
