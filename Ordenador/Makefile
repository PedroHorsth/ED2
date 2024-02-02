CC = gcc
CFLAGS = -Wall -Wextra -g

all: ordena

ordena: main.o bolha.o insercaod.o insercaob.o shellsort.o selecaod.o heapsort.o quicksortini.o quicksortmediana.o quicksortcentro.o mergesort.o radixsort.o bucketsort.o
	$(CC) $(CFLAGS) -o ordena ordena.o bolha.o insercaod.o insercaob.o shellsort.o selecaod.o heapsort.o quicksortini.o quicksortmediana,o quicksortcentro.o mergesort.o radixsort.o bucketsort.o

ordena.o: main.c ordena.h
	$(CC) $(CFLAGS) -c main.c

bolha.o: bolha.c ordena.h
	$(CC) $(CFLAGS) -c bolha.c

insercaod.o: insercaod.c ordena.h
	$(CC) $(CFLAGS) -c insercaod.c

insercaob.o: insercaob.c ordena.h
	$(CC) $(CFLAGS) -c insercaob.c

shellsort.o: shellsort.c ordena.h
	$(CC) $(CFLAGS) -c shellsort.c

selecaod.o: selecaod.c ordena.h
	$(CC) $(CFLAGS) -c selecaod.c

heapsort.o: heapsort.c ordena.h
	$(CC) $(CFLAGS) -c heapsort.c

quicksortini.o: quicksortini.c ordena.h
	$(CC) $(CFLAGS) -c quicksortini.c

quicksortmediana.o: quicksortmediana.c ordena.h
	$(CC) $(CFLAGS) -c quicksortmediana.c

quicksortcentro.o: quicksortcentro.c ordena.h
	$(CC) $(CFLAGS) -c quicksortcentro.c

mergesort.o: mergesort.c ordena.h
	$(CC) $(CFLAGS) -c mergesort.c

radixsort.o: radixsort.c ordena.h
	$(CC) $(CFLAGS) -c radixsort.c

bucketsort.o: bucketsort.c ordena.h
	$(CC) $(CFLAGS) -c bucketsort.c

clean:
	rm -f *.o ordena saida.txt
