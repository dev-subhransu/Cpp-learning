main.exe: utils.o main.o
	g++ utils.o main.o -o main.exe

utils.o: utils.cpp utils.h
	g++ -c utils.cpp  

main.o: main.cpp utils.h
	g++ -c main.cpp

clean:
	del *.o *.exe 