#include "Distance.h"
#include<iostream>

using namespace std;

Distance::Distance()
{
	feet = 0;
	inches = 0;
}

Distance::Distance(int ft, float in)
{
	feet = ft;
	inches = in;
}

void Distance::inputDistance()
{
	cout << "Enter Feet Value :";
	cin >> feet;
	cout << "Enter Inches Value :";
	cin >> inches;
}

void Distance::printDistance()
{
	cout << "Feet :" << feet << endl;
	cout << "Inches :" << inches << endl;
}

Distance::~Distance()
{
	cout << "Distance Deleted feet " << feet << " inches " << inches << endl;
}

void Distance::addDistance(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches;
	if (inches >= 12.0)
	{
		inches = inches - 12.0;
		feet++;
	}
	feet = feet + (d2.feet + d3.feet);
}
