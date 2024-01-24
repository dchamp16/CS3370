all: Main

Main: Main.cpp
	g++ -std=c++20 -o Main Main.cpp

clean:
	rm -f Main
