NAME		=	megaphone

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

SRC			= $(wildcard *.cpp)
OBJS		= $(SRC:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
re: fclean all

#__Tests__

test_1:		$(NAME)
			./$(NAME) shhhhh... I think the students are asleep...
test_2:		$(NAME)
			./$(NAME) Damnit " ! " Sorry students, I thought this thing was off.
test_3:		$(NAME)
			./$(NAME)

.PHONY: all clean fclean re

