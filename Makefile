.PHONY: all clean fclean re
NAME	= libft.a
SRCS	= ft_atoi.c \
		  	ft_bzero.c \
		  	ft_calloc.c \
		  	ft_isalnum.c \
		  	ft_isalpha.c \
		  	ft_isascii.c \
		  	ft_isdigit.c \
		  	ft_isprint.c \
		  	ft_itoa.c \
		  	ft_memccpy.c \
		  	ft_memchr.c \
		  	ft_memcmp.c \
		  	ft_memcpy.c \
		 	ft_memmove.c \
		 	ft_memset.c \
		 	ft_putchar_fd.c \
		 	ft_putendl_fd.c \
		 	ft_putnbr_fd.c \
		  	ft_putstr_fd.c \
		  	ft_split.c \
		  	ft_strchr.c \
		  	ft_strdup.c \
		  	ft_strjoin.c \
		  	ft_strlcat.c \
		  	ft_strlcpy.c \
		  	ft_strlen.c \
		  	ft_strmapi.c \
		  	ft_strncmp.c \
		  	ft_strnstr.c \
		  	ft_strrchr.c \
		  	ft_strtrim.c \
		  	ft_substr.c \
		  	ft_tolower.c \
		  	ft_toupper.c
BONUSSRC = ft_lstadd_back_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstsize_bonus.c
OBJS	= $(SRCS:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)
FLAG	= -Wall -Werror -Wextra
CC		= gcc

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
all:		$(NAME)
bonus:		$(BONUSOBJ) $(OBJS)
			ar rc $(NAME) $(OBJS) $(BONUSOBJ)
			ranlib $(NAME)
%.o: %.c
			@$(CC) $(FLAG) -c -o $@ $<
clean:
			rm -f $(OBJS) $(BONUSOBJ)
fclean:	clean
			rm -f $(NAME)
re:		fclean all
