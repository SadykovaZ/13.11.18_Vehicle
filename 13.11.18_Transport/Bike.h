#pragma once
#include"GroudVehicle.h"
class Bike:public GroudVehicle
{
private:
	string type;
public:
	Bike(string type) :GroudVehicle()
	{
		setType(type);
	}
	void setType(string type)
	{
		cout << "Enter type of bike: ";
		cin >> type;
		this->type = type;
	}
	string getTypeBike() const { return type; }
	void info() const
	{
		GroudVehicle::info();
		cout << "Type of the bike = " << getTypeBike() << endl;
	}	
};

