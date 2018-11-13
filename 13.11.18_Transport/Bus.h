#pragma once
#include"Car.h"
class Bus:public Car
{
public:
	Bus() :Car() {}
	void info()
	{
		Car::info();
	}
};

