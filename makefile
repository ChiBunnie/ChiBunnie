all: Lab10
Car.o: Car.cpp
	g++ -c Car.cpp

Bicycle.o: Bicycle.cpp
	g++ -c Bicycle.cpp

Building.o: Building.cpp
	g++ -c Building.cpp

Lab10.o: CarbonFootprint.h Car.h Bicycle.h Building.h Lab10.cpp
	g++ -c Lab10.cpp

Lab10: Car.o Bicycle.o Building.o Lab10.o
	g++ Car.o Bicycle.o Building.o Lab10.o -o Lab10

clean:
	rm *.o

