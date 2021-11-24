CC=gcc
AR=ar
MAIN=main.o
MAT=my_mat.o
FLAGS=-Wall -g

all: mains
mains: $(MAIN) $(MAT)
	$(CC) $(FLAGS) -o mains $(MAIN) $(MAT)
$(MAIN): main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
$(MAT): my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c  

.PHONY: clean all
clean:
	rm -f *.o *.a *.so mains maindloop maindrec