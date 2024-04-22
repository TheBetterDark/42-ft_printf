# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:59:26 by muabdi            #+#    #+#              #
#    Updated: 2024/04/19 16:38:40 by muabdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDE = ./include
LIBFT = ./libft

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCDIR = ./src
OBJDIR =./build

SRCS = $(SRCDIR)/ft_printf.c $(SRCDIR)/ft_print_char.c \
$(SRCDIR)/ft_print_string.c $(SRCDIR)/ft_print_pointer.c \
$(SRCDIR)/ft_print_number.c $(SRCDIR)/ft_print_hex.c

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCLUDE) -I$(LIBFT) -c $< -o $@

${NAME}: libft $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

libft:
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a $(NAME)

clean:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJDIR)

fclean:
	@make fclean -C $(LIBFT)
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft