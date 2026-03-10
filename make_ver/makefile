CC = gcc
main : main.c guest.o menu.o
	${CC} -o $@ $^
guest.o : guest.h guest.c
	${CC} -c $^

menu.o : menu.h menu.c
	${CC} -c $^

clean : 
	rm *.o main