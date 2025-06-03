# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 12:06:39 by ihadj             #+#    #+#              #
#    Updated: 2025/05/26 18:45:00 by ihadj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

# Directories
SRCS_DIR    = srcs
INCLUDES_DIR= includes
LIBFT_DIR   = libft

# Compiler
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I$(INCLUDES_DIR) -I$(LIBFT_DIR)

# Libraries
LIBFT_A     = $(LIBFT_DIR)/libft.a

SRC = $(SRCS_DIR)/main.c \
      $(SRCS_DIR)/utils/arg_checker.c \
      $(SRCS_DIR)/utils/utils.c \
      $(SRCS_DIR)/utils/index_gestion.c \
      $(SRCS_DIR)/utils/array.c \
      $(SRCS_DIR)/init/list_init.c \
      $(SRCS_DIR)/instructions/instructions_utils.c \
      $(SRCS_DIR)/instructions/push_instructions.c \
      $(SRCS_DIR)/instructions/rotate_instructions.c \
      $(SRCS_DIR)/instructions/rotate_instructions2.c \
      $(SRCS_DIR)/instructions/rotate_instructions3.c \
      $(SRCS_DIR)/instructions/swap_instructions.c \
      $(SRCS_DIR)/sorting/solver_utils.c \
      $(SRCS_DIR)/sorting/chunk_sort.c \
      $(SRCS_DIR)/sorting/algo.c

OBJS = $(SRC:.c=.o)

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT_A) $(LIBFT_DIR)/printf/libftprintf.a

%.o: %.c $(INCLUDES_DIR)/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
