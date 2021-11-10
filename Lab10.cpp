// CS271
// Program Name: Lab10.cpp
// Author: Chioma Abed-Amazu
// Date: 12/02/2020
// Purpose: Application program that creats objects for each of the three classes

//Libraries
#include <iostream>
#include <iomanip>
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
#include "CarbonFootprint.h" 
#include <ctime>
#include <cstdlib> 
#define SIZE 10
using namespace std;

//Returns a rand_int between min and max
inline int rand_int(int min, int max) {
	
	return (rand() % (max - min + 1)) + min;

} //end function rand_int

//main function begins
int main(int argc, char **argv) {
	
	srand(time(NULL));      //seeds random numbers
	CarbonFootprint *array[SIZE*3];
	Car *cars = (Car *) calloc(SIZE, sizeof(Car));
	Building *builds = (Building *) calloc(SIZE, sizeof(Building));
	Bicycle *bike = (Bicycle *) calloc(SIZE, sizeof(Bicycle));

	/*intialies the range for the array*/
	for(int i = 0; i < SIZE; i++) {
		
		cars[i] = Car(rand_int(0, 20));
		builds[i] = Building(rand_int(120, 5000));
		bike[i] = Bicycle(rand_int(2, 20));

	} //end of for

	/*intializes array elements to class memebers*/
	for(int i = 0; i < SIZE; i++) {
		
		array[i] = new Car(cars[i].getGallon());
		array[i + 10] = new Building(builds[i].getFootage());
		array[i + 20] = new Bicycle(bike[i].getBikes());

	} //end of for

	cout<<endl;
	/*Prints the prompt and the calculated carbon foot prints of each vehicle*/
	for(int i = 0; i < SIZE; i++) {
		
		cout<<"CARBON FOOT PRINTS OF DIFFERENT VECHICLES"<<endl;
		cout <<bike[i].getBikes() << " Bicycles are on the road: " << array[i + 20]->getCarbonFootprint() << endl;
		cout << "Building with " << builds[i].getFootage() << " square feet: " << array[i + 10]->getCarbonFootprint() << endl;
		cout << "Car that has used " << cars[i].getGallon() << " gallons of gas: " << array[i]->getCarbonFootprint() << endl<<endl;
			
	} //end of for

	cout << "Program ends" << endl;
	return 0;

} //end of function main
