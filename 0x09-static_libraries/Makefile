CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = _putchar.c _islower.c _isalpha.c _abs.c 0-isupper.c _isdigit.c _strlen.c _puts.c _strcpy.c _atoi.c _strcat.c _strncat.c _strncpy.c _strcmp.c _memset.c _memcpy.c _strspn.c _strpbrk.c _strstr.c
OBJ = $(SRC:.c=.o)

libmy.a: $(OBJ)
		ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $<

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f libmy.a

re: fclean libmy.a

.PHONY: clean fclean re

