# Nombre del archivo ejecutable y librería
NAME = libft.a
LIBFT = libftOut.a

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRC = ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strlcat.c ft_strlen.c ft_strncmp.c \
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_memcmp.c ft_strnstr.c \
	  ft_strchr.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_memchr.c

OBJ = $(SRC:.c=.o)
MAIN = main.c

# Reglas
all: $(LIBFT) $(NAME)

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $(OBJ)

$(NAME): $(LIBFT)
	$(CC) $(CFLAGS) $(MAIN) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBFT) $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean re
