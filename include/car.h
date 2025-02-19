#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	virtual string Drive() = 0;
	virtual double FuelEfficiency() = 0;
	virtual string ChargeBattery() = 0;
	virtual string Refuel() = 0;
	virtual string SwitchMode() = 0;
};