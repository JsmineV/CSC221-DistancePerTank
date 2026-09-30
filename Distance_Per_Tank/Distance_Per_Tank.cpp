//This program calculates the distance a car can travel on a full tank of gas. 

#include <iostream>
using namespace std;

int main()

{
	cout << "This program is going to calculate the distance a car can travel on one full 20 gallon tank of gas in a town versus on the highway." << endl;
	cout << "While in town the car uses 23.5 miles per gallon." << '\n';
	cout << "While on the highway the car uses 28.9 miles per gallon." << '\n'; 

	double tankSize = 20.0; // size of the gas tank in gallons 
	double townMPG = 23.5; 
	double highwayMPG = 28.9; 

	double townDistance = tankSize * townMPG;
	double highwayDistance = tankSize * highwayMPG;

	cout << "The distance the car can travel in town on a full tank of gas is: " << townDistance << " miles." << '\n';
	cout << "The distance the car can travel on the highway with a full tank of gas is: " << highwayDistance << " miles." << endl; 


	return 0; 




}