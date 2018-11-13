#pragma once
#include"Vehicle.h"
class GroudVehicle:public Vehicle
{
private:
	unsigned int cntWheels;
public:
	GroudVehicle()
	{
		fill();
	}
	GroudVehicle(unsigned int cntWheels)
	{
		setCntWheels(cntWheels);
		fill();
	}
	void fill()
	{
		Vehicle::fill();
		cout << "Enter number of wheels: ";
		cin >> cntWheels;
		setCntWheels(cntWheels);
	}
	void setCntWheels(unsigned int cntWheels)
	{
		this->cntWheels = cntWheels;
	}
	unsigned int getCntWheels() const { return cntWheels; }

	void info()
	{
		Vehicle::info();
		cout << "Number of wheels = " << getCntWheels() << endl;
	}
};


