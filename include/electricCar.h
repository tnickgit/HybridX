#pragma once

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

class ElectricCar : virtual public Car
{
public:
	string Drive() override;
	double FuelEfficiency() override;
	string ChargeBattery() override;
};