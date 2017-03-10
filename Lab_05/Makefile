main: main.o digits.o
	g++ -o main.o digits.o

main.o: main.cpp digits.h
	g++ -c main.cpp

digits.o: digits.cpp digits.h
	g++ -c digits.cpp

clean:
	rm main.o digits.o
