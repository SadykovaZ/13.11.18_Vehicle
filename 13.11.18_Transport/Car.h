#pragma once
#include"GroudVehicle.h"
class Car:public GroudVehicle
{
private:
	string type;
public:
	Car()
	{
		setType(type);
	}
	Car(string type) :GroudVehicle()
	{
		setType(type);
	}
	void setType(string type)
	{
		cout << "Enter type of car: ";
		cin >> type;
		this->type = type;
	}
	string getTypeCar() const { return type; }
	void info() const
	{
		GroudVehicle::info();
		cout << "Type of the car = " << getTypeCar() << endl;
	}	
};

