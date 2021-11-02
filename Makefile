# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 17:35:10 by ajimenez          #+#    #+#              #
#    Updated: 2021/11/02 14:00:09 by Alejandro        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc 
CFLAGS	= -Wall -Wextra -Werror -g
LIB 	= ar -rcs
RM		= /bin/rm -rf

LIBFT	= ./libft/libft.a
LIBP	= push_swap.a 

NAME 	= push_swap 
INCLUDE	= -I./includes/
SRCS	= ./srcs/push_swap.c ./utils/ft_lst_int.c ./utils/ft_lst_int_2.c

OBJS	= $(SRCS:.c=.o)
COMP	= $(CC) $(LIBP) $(SRCS) -o $(NAME)

all: 		$(NAME)

$(NAME):	$(OBJS)
					@echo "\033[33m----Compiling libft----"
					@make -C ./libft
					@cp libft/libft.a ./$(LIBP)
					$(LIB) $(LIBP) $(OBJS)
					$(COMP)
					@echo "\n\033[1;32mEverything done! ░░░░░░ ＼(>o<)ノ ░░░░░\033[39m\n"

clean:
					@make clean -C ./libft
					$(RM) $(OBJS) $(OBJS_B)

fclean: 	clean
					@make fclean -C ./libft
					$(RM) $(NAME)
					$(RM) $(PROG)
					@echo "\n\033[31mEverything fcleaned! ░░░░░░ ٩(╬ʘ益ʘ╬)۶ ░░░░░\n\033[39m"

re:			fcleanall

.PHONY: all clean fclean re
 
