# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 17:35:10 by ajimenez          #+#    #+#              #
#    Updated: 2021/11/24 17:32:01 by ajimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc 
CFLAGS	= -Wall -Wextra -Werror -g
SAN		= -fsanitize=address
LIB 	= ar -rcs
RM		= /bin/rm -rf

LIBFT	= ./libft/libft.a
LIBP	= push_swap.a 

NAME 	= push_swap 
SRCS	= ./srcs/push_swap.c ./srcs/sort-three-five.c ./srcs/sort-utils.c    \
		  ./srcs/sort-five-to-one-hundred.c ./utils/ft_lst_int.c             \
		  ./utils/ft_lst_int_2.c  ./utils/ft_swap.c ./utils/mv_utils.c       \
		  ./utils/ft_push.c ./utils/ft_rotate.c  ./utils/utils_info_stack.c  \
		  ./srcs/more_than_five.c ./utils/ft_quick_sort.c ./srcs/parser.c 	 \
		  ./tmp/ft_print_stacks.c 

OBJS	= $(SRCS:.c=.o)
COMP	= $(CC) $(CFLAGS) $(LIBP) $(SRCS) -o $(NAME)
SANCOMP	= $(CC) $(CFLAGS) $(SAN) $(LIBP) $(SRCS) -g3 -o $(NAME)

all: 		$(NAME)

$(NAME):			$(OBJS)
					@echo "\n\033[33mMaking libft! ░░░░░░ /(._.)\ ░░░░░\033[39m\n"
					@make -s -C ./libft
					@cp libft/libft.a ./$(LIBP)
					$(LIB) $(LIBP) $(OBJS)
					$(COMP) 
					@echo "\n\033[1;32mEverything done! ░░░░░░ ＼(>o<)ノ ░░░░░\033[39m\n"

fsanitize:			$(OBJS)
					@echo "\n\033[33mMaking libft! ░░░░░░ /(ಠ_ಠ)\ ░░░░░\033[39m\n"
					@make -s -C ./libft
					@cp libft/libft.a ./$(LIBP)
					$(LIB) $(LIBP) $(OBJS)
					$(SANCOMP)
					@echo "\n\033[1;32mEverything done! ░░░░░░ ＼(>o<)ノ ░░░░░\033[39m\n"

clean:
					@make clean -C ./libft
					$(RM) $(OBJS) $(OBJS_B)

fclean: 	clean
					@make fclean -C ./libft
					$(RM) $(NAME)
					$(RM) $(PROG)
					$(RM) $(LIBP)
					@echo "\n\033[31mEverything fcleaned! ░░░░░░ ٩(╬ʘ益ʘ╬)۶ ░░░░░\n\033[39m"

re:			fclean all

.PHONY: all clean fclean re
 
