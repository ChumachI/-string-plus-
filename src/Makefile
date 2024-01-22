CC=gcc
OS=$(shell uname)
FLAGS=-Wall -Werror -Wextra
ifeq ($(OS), Linux)
  FLAGS_LCHECK = -lcheck -pthread -lsubunit -lrt -lm -std=c11
  OPEN=xdg-open
else
  FLAGS_LCHECK = -lcheck
  OPEN=open
endif
FLAGS_GCOV = -coverage -fprofile-arcs -ftest-coverage
FILE_NAME = my_string
FILE_NAME_SPRINTF = my_sprintf
FILE_NAME_SSCANF = my_sscanf
FILE_TEST = my_unit_test
EXECUTABLE = final

all: test gcov_report

.PHONY: test
test: my_string.a
	$(CC) -c $(FILE_TEST).c
	$(CC) $(FILE_TEST).o -o unit_test -L. -lmy_string $(FLAGS) $(FLAGS_LCHECK)

.PHONY: gcov_report
gcov_report: my_string.a
	$(CC) $(FLAGS) $(FILE_TEST).c $(FLAGS_LCHECK) $(FLAGS_GCOV) $(FILE_NAME).c $(FILE_NAME_SPRINTF).c $(FILE_NAME_SSCANF).c -o info
	./info
	lcov -t "info" -o gcovreport.info -c -d .
	genhtml -o report gcovreport.info
	$(OPEN) report/index.html

.PHONY: my_string.a
my_string.a:
	$(CC) -c $(FILE_NAME).c $(FILE_NAME_SPRINTF).c $(FILE_NAME_SSCANF).c
	ar -rcs $@ $(FILE_NAME).o $(FILE_NAME_SPRINTF).o $(FILE_NAME_SSCANF).o
	ranlib $@
	rm -rf *.o

.PHONY: docker
docker:
	docker rmi -f string && docker build -t string . && docker run --name unit string
	# docker cp unit:/hello/report .
	docker rm unit

leaks:

.PHONY: cppcheck
cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h

style:
	clang-format -i *.c
	clang-format -i *.h

.PHONY: git
git: style
	rm -rf report
	rm unit_test
	git add .
	git commit -m "commit"
	git push

clean:
	rm -rf *.o *.gcda *.gcno *.info report
	rm -f info
