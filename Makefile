NAME			= libft.a
SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_atoi.c ft_isalpha.c ft_strtrim.c\
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strlcpy.c \
					ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_putnbr_fd.c  ft_strlen.c ft_strnstr.c\
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strchr.c \
					ft_strrchr.c ft_memmove.c ft_strlcat.c ft_strncmp.c
SRC_OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.


all:			$(NAME)

$(NAME):		$(SRC_OBJS)
				ar rcs $(NAME) $(SRC_OBJS)

clean:
				$(RM) $(SRC_OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

#bonus:			$(SRC_OBJS) $(BONUS_OBJS)
#				ar rcs $(NAME) $(SRC_OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
