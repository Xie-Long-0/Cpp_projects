OBJ = main.o insertsort.o
CFLAGS = -g

main: $(OBJ)
	gcc -o $@ $^

.c.o:
	gcc -c $<

.PHONY: clean
clean:
	rm -f main $(OBJ)
