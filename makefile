all:	NumerosPrimos.x
			mv NumerosPrimos.x /tmp
			/tmp/NumerosPrimos.x

NumerosPrimos.x:	NumerosPrimos.o
				gcc -o	NumerosPrimos.x	NumerosPrimos.o

NumerosPrimos.o:	main.c
				gcc -c	main.c	-o NumerosPrimos.o

clean:
				rm	NumerosPrimos.o	/tmp/NumerosPrimos.x
