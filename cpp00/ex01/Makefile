CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = PhoneBook
SRCS = main.cpp \
       PhoneBook.class.cpp \
       Contact.class.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
