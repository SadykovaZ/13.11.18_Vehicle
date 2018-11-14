#pragma once
#include"Vehicle.h"
class AirVehicle :public Vehicle
{
private:
	unsigned int altitude;
public:
	AirVehicle()
	{
		fill();
	}
	AirVehicle(unsigned int altitude)
	{
		setAltitude(altitude);
		fill();
	}
	void fill()
	{
		Vehicle::fill();
		cout << "Enter an altitude of vehicle: ";
		cin >> altitude;
		setAltitude(altitude);
	}
	void setAltitude(unsigned int altitude) 
	{
		this->altitude = altitude; 
	}
	unsigned int getAltitude() const { return altitude; }
	
	void info() const
	{
		Vehicle::info();
		cout << "Altitude = " << getAltitude() << endl;
	}
};

