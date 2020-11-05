CC = g++

CFLAGS = -c -Wall
FFLAGS = -o

main: menu.o main.o
	$(CC) $(FFLAGS) main menu.o main.o

menu.o: menu.cpp
	$(CC) $(CFLAGS) menu.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o main
