#pragma once
#include"SpaceVehicle.h"
class Rocket:public SpaceVehicle
{
public:
	Rocket() :SpaceVehicle() {}
	void info()
	{
		SpaceVehicle::info();
	}
};

