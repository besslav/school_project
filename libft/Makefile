NAME = libft.a
CC = gcc
HEAD	= libft.h
GFLAGS = -Wall -Wextra -Werror -I${HEAD}
SRCS = 	ft_isalpha.c		ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
		ft_isprint.c		ft_strchr.c		ft_strrchr.c	ft_strncmp.c\
		ft_memchr.c			ft_memcmp.c		ft_strlcpy.c	ft_strlcat.c\
		ft_toupper.c		ft_tolower.c	ft_strlen.c		ft_memset.c\
		ft_bzero.c			ft_memcpy.c		ft_memmove.c	ft_strnstr.c\
		ft_calloc.c			ft_strdup.c		ft_substr.c		ft_strjoin.c\
		ft_strtrim.c		ft_itoa.c		ft_putchar_fd.c	ft_putstr_fd.c\
		ft_putendl_fd.c 	ft_putnbr_fd.c	ft_strmapi.c	ft_striteri.c\
		ft_atoi.c			ft_split.c

SRCS_B = 	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
			ft_lstlast.c	ft_lstdelone.c		ft_lstadd_back.c\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c
OBJ = ${SRCS:%.c=%.o}
OBJ_B = ${SRCS_B:%.c=%.o}

.PHONY: all clean fclean re bonus

all: ${NAME}

${NAME}: ${OBJ} ${HEAD}
	ar rcs ${NAME}  $?

%.o	: %.c ${HEAD}
	@${CC} ${GFLAGS} -c $< -o $@

bonus	:
	@make OBJ="${OBJ_B}" all

clean:
	@rm -f ${OBJ} ${OBJ_B}

fclean: clean
	@rm -f ${NAME}

re: fclean all 

