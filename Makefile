NAME = libft.a
CFILES = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c \
		ft_strjoin.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_calloc.c ft_substr.c ft_strdup.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_atoi.c

OFILES = $(CFILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME) : $(OFILES)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

re: fclean all

clean : 
	$(RM) $(OFILES) $(OBFILES)
	 
fclean : clean
	$(RM) $(NAME)

.PHONY : clean fclean re all
