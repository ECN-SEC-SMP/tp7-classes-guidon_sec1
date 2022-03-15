all : prog_tp7

rebuild : clean all

prog_tp7 : main.o point.o
	g++ -o prog_tp7 main.o point.o -g

main.o : main.cpp
	g++ -o main.o -c main.cpp -g

point.o : point.cpp
	g++ -o point.o -c point.cpp -g

forme.o : point.cpp
	g++ -o point.o -c point.cpp -g

clean :
	del *.o