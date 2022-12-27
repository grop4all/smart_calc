CFLAGS=-c -Wall -Wextra -std=c11 -g

LIBS = -lcheck


ifeq ($(shell uname), Linux)
	LINUX_LIBS=-lsubunit -lrt -lpthread -lm
endif

all:
	gcc $(CFLAGS) Node.c Node.h
	gcc $(CFLAGS) stack.c stack.h
	gcc $(CFLAGS) calc.c calc.h 
	gcc calc_test.c *.o -o out $(LIBS) $(LINUX_LIBS)
	./out


lint:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c

clean:
	- rm a.out
	- rm *.o *.gch
	- rm calc
