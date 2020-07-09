
output: main.o sum.o sub.o mul.o div.o op
	gcc -o output main.o sum.o sub.o mul.o div.o

main.o: main.c 
	gcc -c main.c

sum.o: sum.c sum.h
	gcc -c sum.c

sub.o: sub.c
	gcc -c sub.c

div.o: div.c
	gcc -c div.c

mul.o: mul.c
	gcc -c mul.c

op: 
	./output

clean: 
	rm *.o output
 
	
	
	
	

