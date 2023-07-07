OBJ = main.o insertsort.o binarysort.o
CFLAGS = -g -Wall -std=c++20
CX = g++

main: $(OBJ)
	$(CX) $(CFLAGS) -o $@ $^

.cpp.o:
	$(CX) $(CFLAGS) -c $<

.PHONY: clean
clean:
	-rm -f main $(OBJ)
