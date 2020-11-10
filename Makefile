CC = g++

CFLAGS = -c -Wall
FFLAGS = -o

main: menu.o cadastro.o buscarAluno.o main.o
	$(CC) $(FFLAGS) main menu.o cadastro.o buscarAluno.o main.o

menu.o: menu.cpp
	$(CC) $(CFLAGS) menu.cpp

cadastro.o: cadastro.cpp
	$(CC) $(CFLAGS) cadastro.cpp

buscarAluno.o: buscarAluno.cpp
	$(CC) $(CFLAGS) buscarAluno.cpp -I/usr/include/python3.7m

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o main
