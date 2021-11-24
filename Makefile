CC=gcc
AR=ar
MAIN=main.o
MAT=my_mat.o
FLAGS=-Wall -g

all: connections
connections: $(MAIN) $(MAT)
	$(CC) $(FLAGS) -o connections $(MAIN) $(MAT)
$(MAIN): main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
$(MAT): my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c  

.PHONY: clean all
clean:
	rm -f *.o connections
