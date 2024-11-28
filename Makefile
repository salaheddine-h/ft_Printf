# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salhali <salhali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 17:46:39 by salhali           #+#    #+#              #
#    Updated: 2024/11/27 15:32:21 by salhali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

cc = cc 

CFLAGS = -Wall -Wextra -Werror 

RM = rm -rf 

C_src = ft_printf.c ft_putchar.c ft_putnbr.c ft_puthex.c ft_putunbr.c ft_putadd.c ft_putstr.c

O_bjc = ft_printf.o ft_putchar.o ft_putnbr.o ft_puthex.o ft_putunbr.o ft_putadd.o ft_putstr.o

all : $(NAME)

$(NAME) : $(O_bjc)
	ar rcs $(NAME) $(O_bjc)

clean : 
	$(RM) $(O_bjc)

fclean : clean
	$(RM) $(NAME)

re : fclean all



