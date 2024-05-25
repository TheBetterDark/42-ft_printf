# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:59:26 by muabdi            #+#    #+#              #
#    Updated: 2024/05/25 19:07:05 by muabdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = ./includes
LIBS = ./libs

LIBFT = $(LIBS)/libft

CC = cc
CFLAGS = -Wall -Werror -Wextra

INCLUDEFLAGS = -I$(INCLUDES) -I$(LIBFT)/includes

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

SRC_DIR = ./src
OBJ_DIR =./bin

SRCS = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_print_char.c \
$(SRC_DIR)/ft_print_string.c $(SRC_DIR)/ft_print_pointer.c \
$(SRC_DIR)/ft_print_number.c $(SRC_DIR)/ft_print_hex.c

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME) $(OBJ_DIR)

$(OBJ_DIR):
	@echo "${YELLOW}Creating object directory $(OBJ_DIR)...${NC}"
	@mkdir -p $(OBJ_DIR)
	@echo "${GREEN}Object directory $(OBJ_DIR) created.${NC}"
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(INCLUDEFLAGS) -c $< -o $@

${NAME}: $(OBJS)
	@make -C $(LIBFT)
	@ar -rcs $(NAME) $(OBJS)
	@echo "${GREEN}$(NAME) created.${NC}"

clean:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJ_DIR)

fclean:
	@make fclean -C $(LIBFT)
	@rm -rf $(OBJ_DIR)
	@rm -f $(NAME)
	@echo "${GREEN}$(NAME) cleaned.${NC}"

re: fclean all

libs:
	@echo "${YELLOW}Updating submodules...${NC}"
	@git submodule update --init --recursive --remote
	@echo "${GREEN}Submodules updated.${NC}"

.PHONY: all clean fclean re libft