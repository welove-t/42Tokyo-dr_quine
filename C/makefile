# ==== Config ====
CC      := clang
CFLAGS  := -Wall -Wextra -Werror

# ===== Target programs =====
BINS    := Colleen Grace Sully

.PHONY: all clean fclean re

# ===== Default rule =====
all: $(BINS)

# ===== Generic build rule =====
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# ===== Clean rules =====
clean:
	@echo "nothing to clean"

fclean:
	$(RM) $(BINS) Grace_kid.c tmp_Colleen

re: fclean all
