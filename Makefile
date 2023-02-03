# **************************************************************************** #
# NAME 
# **************************************************************************** #

NAME			= libft.a

# **************************************************************************** #
# FILES
# **************************************************************************** #

SRC				= ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c \
				  ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c \
				  ft_memcpy.c	ft_memmove.c	ft_strlcpy.c	ft_strlcat.c \
				  ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c \
				  ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c \
				  ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c \
				  ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c \
				  ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c \
				  ft_putendl_fd.c	ft_putnbr_fd.c 

SRC_BONUS		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ				= $(SRC:.c=.o)
OBJ_BONUS		= $(SRC_BONUS:.c=.o)
DEP	   			= $(addsuffix .d, $(basename $(SRC)))
DEP_BONUS 		= $(addsuffix .d, $(basename $(SRC_BONUS)))

# **************************************************************************** #
# COMPILATION
# **************************************************************************** #

COMPILE			= gcc -c
CFLAGS			= -Wall -Werror -Wextra -MMD
LIBC			= ar -rcs
RM_FILE			= rm -f

# **************************************************************************** #
# RULES
# **************************************************************************** #

%.o:%.c Makefile
		@$(COMPILE) $(CFLAGS) -o $@ $<
		@ECHO "Compiling... $^"

all:	$(NAME)

-include $(DEP)
$(NAME):	$(OBJ)
			@$(LIBC) $(NAME) $(OBJ)
			@ECHO "Created library $(NAME) mandatory"

bonus: .bonus

-include $(DEP_BONUS)
.bonus:	$(NAME)	$(OBJ_BONUS)
		@$(LIBC) $(NAME) $(OBJ_BONUS)
		@touch $@
		@ECHO "Created library $(NAME) with bonus"

clean:
		@$(RM_FILE) $(OBJ) $(OBJ_BONUS)
		@$(RM_FILE) $(DEP) $(DEP_BONUS)
		@$(RM_FILE) .bonus

fclean:	clean
		@$(RM_FILE) $(NAME)

re:		fclean all

rebonus:	fclean bonus

.PHONY: all bonus clean fclean re rebonus
