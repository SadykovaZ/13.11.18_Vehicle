#pragma once
#include"WaterWehicle.h"
class Boat:public WaterWehicle
{
public:
	Boat() :WaterWehicle() {}
	void info() const
	{
		WaterWehicle::info();
	}
};

