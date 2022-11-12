CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: run

median: main.cpp MedianFinderClass.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS)  main.cpp MedianFinderClass.cpp -o medianEX

run: median
	./medianEX

clean:
	-rm -fr medianEX *~ *.o key.* 
