# ==== Config ====
CC      := clang
CFLAGS  := -Wall -Wextra -Werror
NAME    := Colleen

# ==== Rules ====
all: $(NAME)

$(NAME): $(NAME).c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@echo "nothing to clean"

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
