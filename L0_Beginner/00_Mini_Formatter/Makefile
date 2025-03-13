#Static Library Version
#NAME = mini_formatter.a

#Executable Version
NAME = mini_formatter

LIBFT_DIR = Libft

LIBFT = $(LIBFT_DIR)/libft.a

SOURCES = main.c error_check.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I.

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

#Static Library Version
#$(NAME):  $(OBJECTS)
#	@cp $(LIBFT) $(NAME)
#	ar rcs $(NAME) $(OBJECTS) $(LIBFT)

#Executable Version
$(NAME): $(OBJECTS)
	cc $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBFT)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re