#                                     CONFIG                                   #

NAME        := libft.a
CC        := cc
FLAGS    := -Wall -Wextra -Werror

#                                 PROGRAM'S SRCS                               #

SRCS        :=      ft_isdigit.c \
                          ft_strlcpy.c \
                          ft_strlen.c \
                          ft_bzero.c \
                          ft_isascii.c \
                          ft_memcpy.c \
                          ft_isprint.c \
                          ft_isalpha.c \
                          ft_memset.c \
                          ft_memmove.c \
                          ft_strlcat.c \
                          ft_atoi.c \
                          ft_isalnum.c \
						  ft_strlcat.c \
						  ft_toupper.c \
						  ft_tolower.c \
						  ft_strncmp.c \
						  ft_strnstr.c \
						  ft_strchr.c \
						  ft_strrchr.c \
						  ft_memcmp.c \
						  ft_memchr.c \
						  ft_calloc.c \
						  ft_substr.c \
						  ft_strdup.c \


OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
