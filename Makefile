# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2022/12/01 13:04:41 by mhajji-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =   ft_printf.c ft_putchar.c ft_putnbr_base.c \
					ft_putstr.c	ft_strlen.c ft_strlendiv.c \
					ft_putpointeur.c printall.c
					 
OBJS            = $(SRCS:.c=.o)

CC                = cc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror

NAME            = libftprintf.a

all:            $(NAME)

$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)
%.o:%.c            
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				$(RM) $(OBJS) $(OBJS_BNS)

fclean:            clean
				$(RM) $(NAME)

re:             fclean $(NAME)


.PHONY:            all clean fclean re bonus