#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	Distance();
	Distance(int ft, float in);
	void inputDistance();
	void printDistance();
	~Distance();
	void addDistance(Distance d2, Distance d3);

};

