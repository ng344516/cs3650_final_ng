main.o: main.o
	g++ -c main.cc

count: main.o
	./a.out

clean:
	rm -rf *.o a.out

