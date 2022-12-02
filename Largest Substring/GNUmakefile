CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all:  project # first part is what you need to put after make in this case all # second part is function inside the make function you would like to call

project: main.cpp header.h #this is the target files that need to be present to compile
	$(CXX) $(CFLAGS) $(LDFLAGS) main.cpp -o myEXEC 

run: project
	./myEXEC

clean:
	-rm -fr helloEX *~ *.o key.* letter
