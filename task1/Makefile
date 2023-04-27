
ifeq ($(shell uname), Linux)
	CHKFLAGS=-lgtest -lgtest_main -pthread -lrt -lm -lsubunit
else
	CHKFLAGS=-lgtest -lgtest_main
endif


all:
	g++ test.cc -o test -std=c++20 $(CHKFLAGS) 
	./test