Obj = Fibo.o main.o

Fibo.out : $(Obj)
	gcc -o Fibo.out $(Obj)

Fibo.o : Fibo.c Fibo.h
main.o : main.c Fibo.h

.PHONY : clean
clean :
	rm -f Fibo.out $(Obj)

