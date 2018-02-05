Obj = Fibo.o main.o

Fibo.out : $(Obj)
	g++ -o Fibo.out $(Obj)

Fibo.o : Fibo.cpp Fibo.h
main.o : main.cpp Fibo.h

.PHONY : clean
clean :
	rm -f Fibo.out $(Obj)

