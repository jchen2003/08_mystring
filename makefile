all : main.o mystring.o
	gcc -o mystring main.o mystring.o

main.o: main.c mystring.h
	gcc -c main.c

mystring.o: mystring.c
	gcc -c mystring.c

run:
	./mystring

clean:
	rm *.o