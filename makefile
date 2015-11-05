CC = clang++
CFLAGS = -Wall

objects = tools.o sorts.o quicksort.o heapsort.o\
		  radixSort.o

sorts: $(objects)
	$(CC) -o sorts $(objects)


$(objects): tools.h

sorts.o:sorts.cpp array.h heapsort.h quicksort.h
	$(CC) $(CFLAGS) -c sorts.cpp

quicksort.o:quicksort.cpp quicksort.h array.h 
	$(CC) $(CFLAGS) -c quicksort.cpp

radixSort.o:radixSort.cpp radixSort.h array.h 
	$(CC) $(CFLAGS) -c radixSort.cpp

heapsort.o:heapsort.cpp heapsort.h array.h
	$(CC) $(CFLAGS) -c heapsort.cpp

tools.o:tools.cpp 
	$(CC) $(CFLAGS) -c tools.cpp array.h

.PHONY : clean
clean: 
	-rm sorts $(objects)
