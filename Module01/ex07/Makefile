SRCS = main.cpp \

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror

DELETE = rm -rf

NAME = filecopier

all: ${NAME}
	
${NAME}: ${OBJS}
	clang++ -o ${NAME} ${FLAGS} ${OBJS}

clean:
	${DELETE} ${OBJS}

fclean: clean
	${DELETE} ${NAME};

re: fclean all

.PHONY: all clean flcean re