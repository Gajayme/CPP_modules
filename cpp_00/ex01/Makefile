NAME		= p_book

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -O2
RM			= rm -f

SRC			= $(wildcard *.cpp)
INC			= $(wildcard *.hpp)
#INC			= p_book.hpp
OBJS		= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INC) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
