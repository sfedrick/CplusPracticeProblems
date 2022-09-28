CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: run

run: main.cpp class.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) main.cpp class.cpp -o classEX

run: class
	./classEX

clean:
	-rm -fr classEX *~ *.o key.* letter .exe
