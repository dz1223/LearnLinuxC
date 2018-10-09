all: main

main: main.o stack.o maze.o
	gcc $^ -o $@

main.o: main.h stack.h maze.h
stack.o: stack.h main.h
maze.o: maze.h main.h

clean:
	-rm main *.o

.PHONY: clean
