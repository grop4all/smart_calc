
all:
	gcc -c -Wall -Wextra Node.c Node.h
	gcc -c -Wall -Wextra stack.c stack.h
	gcc -c -Wall -Wextra calc.c calc.h 
	gcc *.o -lm -lrt -o calc
	./calc "cos(0)"
	

lint:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c

clean:
	- rm a.out
	- rm *.o *.gch
	- rm calc
