CC = g++

all: compile run
compile:
	${CC} ${ARGS}.cpp -std=c++20 -o ${ARGS}
run:
	./${ARGS}.exe