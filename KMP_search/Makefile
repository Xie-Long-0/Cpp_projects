target	:= main.exe
obj		:= main.o kmp.o

GCC		:= g++
G++ 	:= g++
CFLAGS	:= -g -Wall

$(target) : $(obj)
	$(GCC) $(CFLAGS) $(obj) -o $(target)

kmp.o : kmp.c kmp.h
	$(GCC) -c kmp.c

main.o : main.c kmp.h
	$(GCC) -c main.c


.PHONY : clean
clean:
	-rm -f $(target) $(obj)
