# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 10:43:16 by ytomiyos          #+#    #+#              #
#    Updated: 2021/11/21 20:44:51 by ytomiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

# CXXFLAGS = -Wall -Wextra -Werror

NAME = literal

SRCS =	main.cpp \
		Literal.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $^

clean:
		rm -f *.o

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re