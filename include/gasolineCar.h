#pragma once

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

class GasolineCar : public Car
{
	string Drive() override;
	double fuelEfficiency() override;
	string Refuel() override;
};