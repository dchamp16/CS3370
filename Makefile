CC = g++

all: compile run
compile:
	${CC} ${ARGS}.cpp -o ${ARGS}
run:
	./${ARGS}.exe