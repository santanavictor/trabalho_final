CC = g++

CFLAGS = -c -Wall
FFLAGS = -o

main: menu.o cadastro.o main.o
	$(CC) $(FFLAGS) main menu.o cadastro.o main.o

menu.o: menu.cpp
	$(CC) $(CFLAGS) menu.cpp

cadastro.o: cadastro.cpp
	$(CC) $(CFLAGS) cadastro.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o main
