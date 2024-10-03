# Nombre del archivo ejecutable y librería
NAME = libft.a
LIBFT = libftOut.a

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRC = ft_split.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
	  ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_strjoin.c \
	  ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strlcat.c ft_strlen.c \
	  ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c \
	  ft_memcmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_memchr.c

OBJ = $(SRC:.c=.o)
MAIN = main.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

# Reglas
all: $(LIBFT) $(NAME)

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $(OBJ)

$(NAME): $(MAIN) $(LIBFT)
	$(CC) $(CFLAGS) $(MAIN) $(LIBFT) -o $(NAME)

# Limpieza de objetos
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(LIBFT) $(NAME)

re: fclean all

# Regla bonus incluye los archivos bonus
bonus: $(LIBFT) $(OBJ_BONUS)
	ar rcs $(LIBFT) $(OBJ_BONUS) $(OBJ)
	$(CC) $(CFLAGS) $(MAIN) $(LIBFT) -o $(NAME)

# Phony targets
.PHONY: all clean fclean re bonus
