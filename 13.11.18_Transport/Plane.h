#pragma once
#include"EngineAirVehicle.h"
#include"Wing.h"
class Plane:public EngineAirVehicle
{
private:
	Wing w;
	unsigned int lForce;
public:
	Plane()
	{
		w.setLiftingForce(lForce);
	}
	void info() const
	{
		EngineAirVehicle::info();
		w.info();
	}	
};
