CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: hello

hello: hello2.cpp meta.hh
	$(CXX) $(CFLAGS) $(LDFLAGS) hello.cpp -o helloEX

run: hello
	./helloEX

clean:
	-rm -fr helloEX *~ *.o key.* letter
