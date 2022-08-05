
NAME		=	serialize

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -O2
RM			= rm -f

SRC			= $(wildcard *.cpp)
INC			= $(wildcard *.hpp)
OBJS		= $(SRC:%.cpp=%.o)

all: 		$(NAME)

$(NAME):	$(OBJS) $(INC) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp	$(INC)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) *_shrubbery

fclean:		clean
			$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
