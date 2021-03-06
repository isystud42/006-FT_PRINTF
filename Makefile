# NAME		= printf_prog.out

# INCLUDES	= includes/ft_printf.h includes/libft/libft.h includes/libft/libft.a

# SRC			= ft_parse_flags.c ft_printf.c ft_struct_init.c\

# MAIN		= main.c

# FLAGS		= -Werror -Wall -Wextra

# all: cc

# cc : 
# 	gcc $(MAIN) $(SRC) $(INCLUDES)

# re : all

##PROJECT
NAME = ft_printf
CC = gcc
CFLAGS = ##-Wall -Wextra -Werror

##DIRECTORIES
SRC_PATH = srcs/
OBJ_PATH = objs/
INC_PATH = includes/
INC_LIBFT_PATH = libft/includes/
LIBFT_PATH = libft/

SRC_NAME = ft_parse_flags.c ft_printf.c ft_struct_init.c main.c

OBJ_NAME = $(SRC_NAME:.c=.o)
LIB_NAME = -lft
HEADER_PROJECT = ft_printf.h
HEADER_LIBFT = libft.h

##VARIABLES
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIBFT = $(addprefix -L,$(LIBFT_PATH))
INC = $(addprefix -I,$(INC_PATH))
INC_LIBFT = $(addprefix -I,$(INC_LIBFT_PATH))
HEADER = $(addprefix $(INC_PATH),$(HEADER_PROJECT))
HEADER_LIB = $(addprefix $(INC_LIBFT_PATH),$(HEADER_LIBFT))

##RULES
all: $(NAME)

$(NAME): libft $(OBJ)
	@$(CC) $(LIBFT) $(LIB_NAME) -o $@ $(OBJ)
	@echo "\n\033[1;34m [$(NAME)] %.o\t\t\033[1;32m[Created]\033[0m"
	@echo "\033[1;34m [$(NAME)] $(NAME)\t\t\033[1;32m[Created]\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HEADER) $(HEADER_LIB)
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC) $(INC_LIBFT) -o $@ -c $<
	@echo "\033[32m█\033[0m\c"

clean:
	@rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@make clean -C $(LIBFT_PATH)
	@echo "\033[1;34m [$(NAME)] %.o\t\033[1;31m[Removed]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@echo "\033[1;34m [$(NAME)] $(NAME)\t\033[1;31m[Removed]\033[0m"

re: fclean all

libft:
	@make -C $(LIBFT_PATH)

.PHONY: libft all clean fclean re