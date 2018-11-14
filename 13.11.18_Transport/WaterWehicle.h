#pragma once
#include"Vehicle.h"
class WaterWehicle: public Vehicle
{
private:
	unsigned int displacement;
public:
	WaterWehicle()
	{
		fill();
	}
	WaterWehicle(unsigned int displacement)
	{
		setDisplacement(displacement);
		fill();
	}
	void fill()
	{
		Vehicle::fill();
		cout << "Enter displacement: ";
		cin >> displacement;
		setDisplacement(displacement);
	}
	void setDisplacement(unsigned int displacement)
	{
		this->displacement = displacement;
	}
	unsigned int getDisplacement() const { return displacement; }

	void info() const
	{
		Vehicle::info();
		cout << "Displacement of water vehicle = " << getDisplacement() << endl;
	}
};


