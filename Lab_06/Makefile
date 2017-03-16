main: main.o shapes.o
	g++ -o main main.o shapes.o

main.o: main.cpp
	g++ -c main.cpp

shapes.o: shapes.cpp
	g++ -c shapes.cpp

clean:
	rm main.o shapes.o