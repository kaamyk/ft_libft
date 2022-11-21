# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:03:29 by anvincen          #+#    #+#              #
#    Updated: 2022/11/21 17:38:21 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
			ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
			ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
			ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c \
			ft_strrchr.c ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c \
			ft_memset.c ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_striteri.c \

OBJS	=	$(SRCS:.c=.o)

BONUS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

B_OBJS	=	$(BONUS:.c=.o)

FLAGS	=	-Werror -Wall -Wextra

.c.o:
		gcc $(FLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME) bonus

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:		$(B_OBJS)
		ar rc $(NAME) $(B_OBJS)
		ranlib $(NAME)

clean:
		rm -f *.o

fclean:		clean
		rm -f $(NAME)

re:			fclean	all
