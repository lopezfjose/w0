
vpath %.cpp src
vpath %.h include

CC := g++

CFLAGS := -g -Wall -Wextra -std=c++17 -I include
LFLAGS := 

all: w.exe

w.exe: main.o
	$(CC) $(LFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf *.o *.exe
