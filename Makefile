all: proj4.exe

LinkedNodeClass.o: LinkedNodeClass.h LinkedNodeClass.cpp
	g++ -std=c++98 -g -Wall -c LinkedNodeClass.cpp -o LinkedNodeClass.o

SortedListClass.o: SortedListClass.h SortedListClass.cpp
	g++ -std=c++98 -g -Wall -c SortedListClass.cpp -o SortedListClass.o

FIFOQueueClass.o: FIFOQueueClass.h FIFOQueueClass.cpp
	g++ -std=c++98 -g -Wall -c FIFOQueueClass.cpp -o FIFOQueueClass.o

LIFOStackClass.o: LIFOStackClass.h LIFOStackClass.cpp
	g++ -std=c++98 -g -Wall -c LIFOStackClass.cpp -o LIFOStackClass.o

proj4.o: LinkedNodeClass.o SortedListClass.o FIFOQueueClass.o LIFOStackClass.o proj4.cpp 
	g++ -std=c++98 -g -Wall -c proj4.cpp -o proj4.o

proj4.exe: proj4.o LinkedNodeClass.o SortedListClass.o FIFOQueueClass.o LIFOStackClass.o
	g++ -std=c++98 -g -Wall LinkedNodeClass.o SortedListClass.o FIFOQueueClass.o LIFOStackClass.o proj4.o -o proj4.exe

clean:
	rm -f *.o *.exe

