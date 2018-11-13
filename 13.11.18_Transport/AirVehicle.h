#pragma once
#include"Vehicle.h"
class AirVehicle :public Vehicle
{
protected:
	unsigned int altitude;
public:
	AirVehicle(unsigned int altitude)
	{
		setAltitude(altitude);
		fill();
	}
	void setAltitude(unsigned int altitude) { this->altitude = altitude; }
	unsigned int getAltitude() const { return altitude; }
	void fill()
	{
		Vehicle::fill();
		cin >> altitude;
		setAltitude(altitude);
	}
	void info()
	{
		Vehicle::info();
		cout << "Altitude = " << getAltitude() << endl;
	}
};

