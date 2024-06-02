./array.exe : main.o array.o
	gcc main.o array.o -o array.exe
main.o : main.c array.h
	gcc -c main.c
array.o : array.c array.h
	gcc -c array.c
#clear : ./array.exe
