CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: run

sum: main.cpp SolutionClass.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) main.cpp SolutionClass.cpp -o sumEX
run: sum 
	./sumEX
clean:
	-rm -fr sumX *~ *.o key.* letter .exe
