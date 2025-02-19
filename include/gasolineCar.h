#pragma once

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

class GasolineCar : virtual public Car
{
public:
	string Drive() override;
	double FuelEfficiency() override;
	string Refuel() override;
};