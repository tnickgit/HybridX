#pragma once

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

class GasolineCar : public Car
{
public:
	string Drive() override;
	double fuelEfficiency() override;
	string Refuel() override;
};