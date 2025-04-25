# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 13:37:04 by amwahab           #+#    #+#              #
#    Updated: 2025/04/24 13:37:04 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c
OBJ = $(SRC: .c = .o)

NAME = ft_display_file

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f * .o (OBJ)

fclean:
	rm -f * .o (NAME)

.PHONY: all clean fclean

