CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = color
SRC = colores.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: clean all