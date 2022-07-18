# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 07:51:47 by cheseo            #+#    #+#              #
#    Updated: 2022/07/18 20:05:32 by cheseo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCS = ./libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcus
SRCS =  ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		# ft_split.c \
		# ft_itoa.c \
		# ft_strmapi.c \
		# ft_striteri.c \
		# ft_puctchar_fd.c \
		# ft_putstr_fd.c \
		# ft_putendl_fd.c \
		# ft_putnbr_fd.c \
BONUS = # ft_lstnew.c \
		# ft_lstadd_front.c \
		# ft_lstsize.c \
		# ft_lstlast.c \
		# ft_lstadd_back.c \
		# ft_lstdelone.c \
		# ft_lstclear.c \
		# ft_lstiter.c \
		# ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

all : $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: 
	make fclean
	make all

bonus:
	$(MAKE) WITH_BONUS=1 all

.PHONY : re all clean fclean bonus

# CC = gcc
# CFLAGS = -c -Wall -Wextra -Werror
# NAME = libft.a
# SRCS = \
# 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
# 	ft_toupper.c ft_tolower.c \
# 	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c\
# 	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
# 	ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c
# # 	ft_atoi.c ft_itoa.c \
# # 	ft_calloc.c \
# # 	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
# # 	ft_strmapi.c ft_striteri.c \
# # 	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# # BONUS_SRCS = \
# # 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
# # 	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
# # 	ft_lstclear.c ft_lstiter.c ft_lstmap.c

# OBJS = $(SRCS:.c=.o)
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# ifdef W_BONUS
# $(NAME) : $(OBJS) $(BONUS_OBJS)
# 	ar rcs $@ $^	
# else
# $(NAME) : $(OBJS)
# 	ar rcs $@ $^
# endif

# $(OBJS) : $(SRCS)
# 	$(CC) $(CFLAGS) $(SRCS)

# $(BONUS_OBJS) : $(BONUS_SRCS)
# 	$(CC) $(CFLAGS) $(BONUS_SRCS)

# all : $(NAME)

# bonus :
# 	@make W_BONUS=1 all

# clean :
# 	rm -f $(OBJS) $(BONUS_OBJS)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY: all bonus clean fclean re