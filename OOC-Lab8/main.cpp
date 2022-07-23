#include "Distance.h"
#include <iostream>

using namespace std;

int main() {
	/*
	//default constructor
	Distance d1; //static object
	d1.printDistance();

	//overloaded constructor
	Distance d2(11,6.25);
	d2.printDistance();
	*/

	///EX2///

	/*
	//default constructor
	Distance * dist1 = new Distance();
	dist1->printDistance();

	//overloaded constructor
	Distance * dist2 = new Distance(11, 6.25);
	dist2->printDistance();

	delete dist1;
	delete dist2;
	*/

	///EX3///
	Distance dist1, dist3; //default constructor
	Distance dist2(11, 6.25); //overloaded constructor

	dist1.inputDistance();
	dist3.addDistance(dist1,dist2);

	dist1.printDistance();
	dist2.printDistance();
	dist3.printDistance();

	return 0;
}