CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: hotel

hotel: hotel.cpp meta.hh
	$(CXX) $(CFLAGS) $(LDFLAGS) hotel.cpp -o hotelEX

run: hotel
	./hotelEX

clean:
	-rm -fr *~ *.o key.* letter *.exe *.out hotelEX
