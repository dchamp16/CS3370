CC = g++

all: compile run
compile:
	${CC} Main.cpp -std=c++20 -o Main
run:
	./Main.exe