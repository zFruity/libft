# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 12:01:03 by dchuah            #+#    #+#              #
#    Updated: 2023/03/24 20:51:42 by dchuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    	=    ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_striteri.c \

BONUS		= ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	#ft_lstdelone.c \
	# ft_lstclear.c \
	# ft_lstiter.c \
	# ft_lstmap.c \

BONUS_OBJS	= ${BONUS:.c=.o};

OBJS    	=    ${SRCS:.c=.o}
INCLUDES	= 	 libft.h
NAME    	=    libft.a
ARCR    	=    ar cr
RMRF    	=    rm -rf
CFLAGS  	=    -Wall -Wextra -Werror
GCC     	=    gcc

.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

$(NAME):    ${OBJS} ${BONUS_OBJS}
	${ARCR} ${NAME} ${OBJS} ${BONUS_OBJS}

all:    ${NAME}

clean:
	${RMRF} ${OBJS} ${BONUS_OBJS}

fclean:    clean
	${RMRF} $(NAME)

re:    fclean all

bonus:    ${OBJS} ${BONUS_OBJS}
	${ARCR} $(NAME) ${BONUS_OBJS}
