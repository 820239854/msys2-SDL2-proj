all: build

build:
	g++ -o ./out/main -Wall -g ./src/main.cpp  -lmingw32 -lSDL2main -lSDL2

run:
	./out/main.exe