#pragma once
#include"AirVehicle.h"
class AirBalloon:public AirVehicle
{
private:
	unsigned int volume;
public:
	AirBalloon(unsigned int volume):AirVehicle(volume)
	{
		setVolume(volume);		
	}	
	void setVolume(unsigned int volume)
	{
		cout << "Enter volume of air balloon: ";
		cin >> volume;
		this->volume = volume;
	}
	unsigned int getVolume() const { return volume; }
	void info() const
	{
		AirVehicle::info();
		cout << "Volume of air balloon = " << getVolume() << endl;
	}
};

