NAME = megaphone

MY_SOURCES = megaphone.cpp

COMPILER = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(NAME) : $(OBJECTS)
	$(COMPILER) $(CFLAGS) -o $(NAME) $(MY_SOURCES)

all: $(NAME)

clean:
	@echo "Nothing to clean (no objects files generated)."

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re