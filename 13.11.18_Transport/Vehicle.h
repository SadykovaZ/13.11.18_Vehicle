#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
	unsigned int maxSpeed;
	string color;
	unsigned int cntPassengers;
	string model;
	bool hasEngine;
public:
	
	Vehicle(unsigned int maxSpeed = 0, string color = "black", unsigned int cntPasseng = 0, string model = "model", bool hasEngine = 1);
	void fill()
	{
		cout << "Max speed";
		cin >> maxSpeed;
		setMaxSpeed(maxSpeed);
	}
	void setMaxSpeed(unsigned int maxSpeed) 
	{ 		
		this->maxSpeed = maxSpeed;
	}
	unsigned int getMaxSpeed() const { return maxSpeed; }
	
	void setColor(string color) { this->color = color; }
	string getColor() const { return color; }
	
	void setCntPassengers(unsigned int cntPassengers) { this->cntPassengers = cntPassengers; }
	unsigned int getCntPassengers() const { return cntPassengers; }

	void setModel(string model) { this->model = model; }
	string getModel() const { return model; }

	void setHasEngine(bool hasEngine) { this->hasEngine = hasEngine; }
	bool getHasEngine() const { return hasEngine; }
	
	void info()
	{
		cout << "Max speed = "<< getMaxSpeed() << endl;
		cout << "Color = " << getColor() << endl;
		cout << "Number of passengers = " << getCntPassengers() << endl;
		cout << "Model = " << getModel() << endl;
		cout << "Engine (1-yes,2-no) = " << getHasEngine() << endl;
	}
};
Vehicle::Vehicle(unsigned int maxSpeed, string color, unsigned int cntPasseng, string model, bool hasEngine)
{
	setMaxSpeed(maxSpeed);
	setColor(color);
	setCntPassengers(cntPasseng);
	setModel(model);
	setHasEngine(hasEngine);
}
