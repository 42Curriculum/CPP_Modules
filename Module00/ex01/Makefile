NAME = phonebook

all : $(NAME)

$(NAME) :
		clang++ main.cpp phonebook.cpp contact.cpp -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: phonebook