CFLAGS=-c -Wall -Wextra -Werror -std=c11 -g

LIBS = -lcheck


ifeq ($(shell uname), Linux)
	LINUX_LIBS=-lsubunit -lrt -lpthread -lm
endif

test:
	gcc $(CFLAGS) Node.c Node.h
	gcc $(CFLAGS) stack.c stack.h
	gcc $(CFLAGS) calc.c calc.h 
	gcc calc_test.c *.o -o out $(LIBS) $(LINUX_LIBS)
	./out


gcov_report : 
	@gcc  calc_test.c *.o  -o gcov_test --coverage $(LIBS) $(LINUX_LIBS)
	@chmod +x gcov_test
	@./gcov_test
	lcov -t "gcov_test" -o gcov_test.info --no-external -c -d .
	genhtml -o report/ gcov_test.info
	- @open ./report/index.html






lint:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c

leaks: all
	valgrind --leak-check=full --show-leak-kinds=all --show-reachable=no --quiet --track-origins=yes ./out

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem ./*.c


clean:
	- rm out
	- rm *.o *.gch
	- rm calc
