
NAME		=	sedd

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -O2
RM			= rm -f

SRC			= $(wildcard *.cpp)
INC			= $(wildcard *.hpp)
OBJS		= $(SRC:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) $(INC) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(INC) $(SRC)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) "text" "text.replace"
re: fclean all

.PHONY: all clean fclean re


#A heart that's full up like a landfill\
A job that slowly kills you\
Bruises that won't heal\
You look so tired, unhappy\
Bring down the government\
They don't, they don't speak for us\
I'll take a quiet life\
A handshake of carbon monoxide\
And no alarms and no surprises\
No alarms and no surprises\
No alarms and no surprises\
Silent, silent
