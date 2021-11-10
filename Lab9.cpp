// CS271
// Program Name: Lab9.cpp
// Author: Chioma Abed-Amazu
// Date: 11/18/2020
// Purpose: Test function for this Lab... instantiate several Package and TwoDayPackage objects.

//Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "TwoDayPackage.h"
using namespace std;
#define SIZE 250

//returns a random integer between the min and max range
inline int rand_int(int min, int max) {
	
	return (rand() % (max - min + 1)) + min;

} //end function rand_int

//returns a random double between the min and max range
inline double rand_double(int min, int max) {
	
	return (double) rand_int(min * 100, max * 100) / 100;

} //end function rand_double

//Takes a string and returns a list
inline vector<string> split_line(string line, char separator) {
	vector<string> result;
	string word = "";

	for(int i = 0; line[i]; i++) {

		if(line[i] == separator || i == (int) line.size() -1) {
			result.push_back(word);
			word.clear();
		} else {
			word += line[i];
		} //end if


		if(line[i] == '\n') {
			break;
		} //end if

	} //end for

	return result;
} //end function split_line


int main(int argc, char **argv){
	srand(time(NULL));
	fstream fin(argv[1], ios::in); //The file being used for the data which contsins 500 US addresses

	for(int j = 0; j < SIZE; j++) {
		string line, lineb;
		getline(fin, line);
		vector<string> split = split_line(line, ',');
		getline(fin, lineb);
		vector<string> splitb = split_line(lineb, ',');
        
		//The 2 addresses and names needed
        
		//Each even line sends to the next uneven line
		
		double weight = rand_double(100, 1000), cost = rand_double(1, 5);
        
		//Get a random weight and cost (some towns are cheaper than others)
		Package P = Package(split[0] + " " + split[1], split[2], split[3], split[4], split[5], splitb[0] + " " + splitb[1], splitb[2], splitb[3], splitb[4],
			             	splitb[5], weight, cost);
	
		cout<<fixed<<setprecision(2);
		
		//Create a package object
		
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~Package~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

		cout<<"Sender's Mailing Info: "<<P.getSenderName()<<" , "<<P.getSenderAddress()<<" , "<<P.getSenderCity()<<" , "<<P.getSenderState()<<" - "
					<<P.getSenderZIP()<<endl;
	
		cout<<"Recipient's Mailing Info: "<<P.getRecipientName()<<" , "<<P.getRecipientAddress()<<" , "<<P.getRecipientCity()<<" , "<<P.getRecipientState()
			             <<" - " <<P.getRecipientZIP()<<endl;
	
		cout<<"Weight: "<<P.getWeight()<<" Ounces"<<endl;

		cout<<"Cost of Shipping Per Ounce: $"<<P.getCostPerOunce()<<endl;

		cout<<"Mailing Cost: $"<<P.calculateCost()<<endl<<endl;
	
		double f = rand_double(5, 9);

		//Create a TwoDaypackage object

		TwoDayPackage TP = TwoDayPackage(split[0] + " " + split[1], split[2], split[3], split[4], split[5], splitb[0] + " " + splitb[1], splitb[2], splitb[3], 
			                  splitb[4], splitb[5], weight, cost, f);

        	cout<<fixed<<setprecision(2);

		cout<<"~~~~~~~~~~~~~~~~~~~~Two Day Package~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
		cout<<"Sender's Mailing Info: "<<TP.getSenderName()<<" , "<<TP.getSenderAddress()<<" , "<<TP.getSenderCity()<<" , "<<TP.getSenderState()<<" - "
		                      <<TP.getSenderZIP() <<endl;
	
		cout<<"Recipient's Mailing Info: "<<TP.getRecipientName()<<" , "<<TP.getRecipientAddress()<<" , "<<TP.getRecipientCity()<<" , "<<TP.getRecipientState()
						<<" - " <<TP.getRecipientZIP()<<endl;
		
		cout<<"Weight: "<<TP.getWeight()<<" Ounces"<<endl;

                cout<<"Cost of Shipping Per Ounnce: $"<<TP.getCostPerOunce()<<endl;

		cout<<"Flat Fee: $"<<TP.getFlatFee()<<endl;
	
		cout<<"Mailing Cost: $"<<TP.calculateCost()<<endl<<endl;
	
	}// end of for

	cout << "End of program" << endl; //For development purposes only, disregard
	return 0;

}// end of main function
