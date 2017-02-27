main: main.o casting.o
	g++ -o main main.o casting.o

main.o: main.cpp
	g++ -c main.cpp

casting.o: casting.cpp
	g++ -c casting.cpp

clean:
	rm main.o casting.o