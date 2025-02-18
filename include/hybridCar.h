#pragma once

#include <iostream>
#include <string>
#include "electricCar.h"
#include "gasolineCar.h"

using namespace std;

class HybridCar : public ElectricCar, public GasolineCar
{
	string Drive() override;
	double fuelEfficiency() override;
	string ChargeBattery() override;
	string Refuel() override;
	string SwitchMode() override;
};