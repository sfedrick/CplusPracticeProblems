CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: main

main: main.cpp meta.hh
	$(CXX) $(CFLAGS) $(LDFLAGS) main.cpp -o magicsquare

run: main
	./magicsquare

clean:
	-rm -fr helloEX *~ *.o key.* letter
