# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 19:03:28 by amwahab           #+#    #+#              #
#    Updated: 2025/04/23 19:03:28 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du compilateur
CC = gcc

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Chemins des répertoires
SRC_DIR = srcs
INC_DIR = includes

# Sources
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

# Objets
OBJS = $(SRCS:.c=.o)

# Nom de la bibliothèque
NAME = libft.a

# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Règle pour compiler les fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Nettoyer les fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyer les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)

# Tout recompiler
re: fclean all

# Ces règles ne correspondent pas à des noms de fichiers
.PHONY: all clean fclean re