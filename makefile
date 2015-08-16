NumerosPrimos: NumerosPrimos.o
	gcc -Wall -o NumerosPrimos NumerosPrimos.o

NumerosPrimos.o: main.c
	gcc -Wall -c main.c -o NumerosPrimos.o

clean:
	rm NumerosPrimos NumerosPrimos.o
