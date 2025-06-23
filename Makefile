# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 15:42:25 by ihadj             #+#    #+#              #
#    Updated: 2025/06/23 11:55:17 by ihadj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME  = checker

# Directories
SRCS_DIR    = srcs
INCLUDES_DIR= includes
LIBFT_DIR   = libft
BONUS_DIR   = bonus

# Compiler
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I$(INCLUDES_DIR) -Ibonus/srcs -I$(LIBFT_DIR)

# Libraries
LIBFT_A     = $(LIBFT_DIR)/libft.a
PRINTF_DIR  = libft/printf
PRINTF_A    = $(PRINTF_DIR)/libftprintf.a

SRC = $(SRCS_DIR)/main.c \
	$(SRCS_DIR)/utils/arg_checker.c \
	$(SRCS_DIR)/utils/list_utils.c \
	$(SRCS_DIR)/utils/maths_utils.c \
	$(SRCS_DIR)/utils/index_gestion.c \
	$(SRCS_DIR)/utils/costs_gestion.c \
	$(SRCS_DIR)/init/array.c \
	$(SRCS_DIR)/init/list_init.c \
	$(SRCS_DIR)/instructions/instructions_utils.c \
	$(SRCS_DIR)/instructions/push_instructions.c \
	$(SRCS_DIR)/instructions/rotate_instructions.c \
	$(SRCS_DIR)/instructions/rotate_instructions2.c \
	$(SRCS_DIR)/instructions/rotate_instructions3.c \
	$(SRCS_DIR)/instructions/swap_instructions.c \
	$(SRCS_DIR)/sorting/solver_utils.c \
	$(SRCS_DIR)/sorting/small_sorts.c \
	$(SRCS_DIR)/sorting/perform_rotates.c \
	$(SRCS_DIR)/sorting/cases.c \
	$(SRCS_DIR)/sorting/algo.c

OBJS = $(SRC:.c=.o)

# Bonus
SRC_BONUS = $(BONUS_DIR)/main_bonus.c \
    $(BONUS_DIR)/srcs/checker_bonus.c \
	$(SRCS_DIR)/init/array.c \
	$(SRCS_DIR)/init/list_init.c \
	$(SRCS_DIR)/utils/list_utils.c \
	$(SRCS_DIR)/utils/arg_checker.c \
	$(BONUS_DIR)/srcs/push_instructions_bonus.c \
	$(BONUS_DIR)/srcs/rotate_instructions_bonus.c \
	$(BONUS_DIR)/srcs/rotate_instructions2_bonus.c \
	$(BONUS_DIR)/srcs/rotate_instructions3_bonus.c \
	$(BONUS_DIR)/srcs/swap_instructions_bonus.c \

OBJS_BONUS = $(SRC_BONUS:.c=.o)

# Main rule
all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT_A)

# Compil rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Bonus rule
bonus: $(OBJS_BONUS) $(LIBFT_A) 
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(BONUS_NAME) $(LIBFT_A)

# Librairies rules
$(PRINTF_A):
	make -C $(PRINTF_DIR)
$(LIBFT_A):
	make -C $(LIBFT_DIR)

# Cleaning rules
clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus