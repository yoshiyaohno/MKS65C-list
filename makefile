a.out : llist.o tester.o
	gcc llist.o tester.o

llist.o : llist.c llist.h
	gcc -c llist.c

tester.o : tester.c llist.h
	gcc -c tester.c

clean :
	rm a.out *.o

run : 
	./a.out

debug : llist.c tester.c llist.h
	gcc -g -c llist.c
	gcc -g -c tester.c
	gcc -g llist.o tester.o
