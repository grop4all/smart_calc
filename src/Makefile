CFLAGS=-c -Wall -Wextra -Werror -std=c11 -g

LIBS = -lcheck

TEXI2DVI = texi2dvi
infodir = info.d

ifeq ($(shell uname), Linux)
	LINUX_LIBS=-lsubunit -lrt -lpthread -lm
endif

test:
	gcc $(CFLAGS) Node.c Node.h
	gcc $(CFLAGS) stack.c stack.h
	gcc $(CFLAGS) calc.c calc.h 
	gcc calc_test.c *.o -o out $(LIBS) $(LINUX_LIBS)
	./out


gcov_report: calc_test.c 
	clear
	gcc calc_test.c *.o -o coverage.o -lcheck $(LINUX_LIBS) -fprofile-arcs -ftest-coverage  
	./coverage.o
	lcov -c -d . -o coverage.info
	genhtml coverage.info -o coverage
	open coverage/index.html




dvi:
	$(TEXI2DVI) --build-dir=clean $(infodir)/smartcalc.texi -o $(infodir)/smartcalc



lint:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c *.h
	rm .clang-format


leaks: all
	valgrind --leak-check=full --show-leak-kinds=all --show-reachable=no --quiet --track-origins=yes ./out

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem ./*.c


clean:
	- rm coverage.o coverage.info calc_test.gcda calc_test.gcno
	- rm -rf coverage
	- rm a.out
	- rm *.o *.gch
	- rm calc
