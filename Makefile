all: math

math: math.o
	gcc -o math math.o -lm
	
math.o: math.c
	gcc -c math.c

clean: 
	-rm -f math.o	
	-rm -f math
