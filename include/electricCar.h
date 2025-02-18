#pragma once

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

class ElectricCar : public Car
{
	string Drive() override;
	double fuelEfficiency() override;
	string ChargeBattery() override;
};