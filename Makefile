.SILENT:

NAME	=	libft.a

SRCDIR	=	src
SRCS	=	$(SRCDIR)/ft_isalnum.c		$(SRCDIR)/ft_isprint.c		$(SRCDIR)/ft_memcmp.c		$(SRCDIR)/ft_putchar_fd.c	$(SRCDIR)/ft_split.c\
			$(SRCDIR)/ft_strlcat.c		$(SRCDIR)/ft_strncmp.c		$(SRCDIR)/ft_substr.c		$(SRCDIR)/ft_atoi.c			$(SRCDIR)/ft_isalpha.c \
			$(SRCDIR)/ft_itoa.c			$(SRCDIR)/ft_memcpy.c		$(SRCDIR)/ft_putendl_fd.c	$(SRCDIR)/ft_strchr.c		$(SRCDIR)/ft_strlcpy.c \
			$(SRCDIR)/ft_strnstr.c		$(SRCDIR)/ft_tolower.c		$(SRCDIR)/ft_bzero.c		$(SRCDIR)/ft_isascii.c		$(SRCDIR)/ft_memmove.c \
			$(SRCDIR)/ft_putnbr_fd.c	$(SRCDIR)/ft_strdup.c		$(SRCDIR)/ft_strlen.c		$(SRCDIR)/ft_strrchr.c		$(SRCDIR)/ft_toupper.c \
			$(SRCDIR)/ft_calloc.c		$(SRCDIR)/ft_isdigit.c		$(SRCDIR)/ft_memchr.c		$(SRCDIR)/ft_memset.c		$(SRCDIR)/ft_putstr_fd.c \
			$(SRCDIR)/ft_strjoin.c		$(SRCDIR)/ft_strmapi.c		$(SRCDIR)/ft_strtrim.c		$(SRCDIR)/ft_striteri.c		$(SRCDIR)/ft_lstnew.c \
			$(SRCDIR)/ft_lstadd_front.c	$(SRCDIR)/ft_lstsize.c		$(SRCDIR)/ft_lstlast.c		$(SRCDIR)/ft_lstadd_back.c	$(SRCDIR)/ft_lstdelone.c \
			$(SRCDIR)/ft_lstclear.c		$(SRCDIR)/ft_lstiter.c		$(SRCDIR)/ft_lstmap.c 		$(SRCDIR)/ft_putnbr_hex.c	$(SRCDIR)/ft_nblen.c \
			$(SRCDIR)/ft_itohex.c 		$(SRCDIR)/ft_nblen_hex.c \

OBJDIR	=	.obj
OBJS	=	$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

FLAGS	=	-Werror -Wall -Wextra -fPIE

$(OBJDIR)/%.o:		$(SRCDIR)/%.c
		cc $(FLAGS) -c $< -o $@

all:		$(OBJDIR) $(OBJS) $(NAME)

$(NAME):	$(OBJDIR) $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJDIR):
	mkdir -v $(OBJDIR)

clean:
	if [ -d .obj ]; then \
		rm -rv $(OBJDIR); \
	fi

fclean:		clean
		rm -f $(NAME)

re:			fclean	all
