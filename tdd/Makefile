main: main.o prob.o basicmath.o
	g++ -o main main.o prob.o basicmath.o

main.o: main.cpp prob.h basicmath.h
	g++ -c main.cpp

prob.o: prob.cpp prob.h
	g++ -c prob.cpp

basicmath.o: basicmath.cpp basicmath.h
	g++ -c basicmath.cpp


clean:
	rm main.o prob.o basicmath.o

