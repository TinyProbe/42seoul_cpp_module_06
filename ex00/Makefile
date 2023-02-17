# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 19:43:18 by tkong             #+#    #+#              #
#    Updated: 2023/02/18 04:01:27 by tkong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CPL = c++
OPT = -Wall -Wextra -Werror -std=c++98 -O2 -o $(NAME)
INC = AFormatter.hpp\
	  CharFormatter.hpp\
	  IntFormatter.hpp\
	  FloatFormatter.hpp\
	  DoubleFormatter.hpp
SRC = AFormatter.cpp\
	  CharFormatter.cpp\
	  IntFormatter.cpp\
	  FloatFormatter.cpp\
	  DoubleFormatter.cpp\
	  main.cpp

$(NAME): $(INC) $(SRC) Makefile
	$(CPL) $(OPT) $(SRC)

all: $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
