#pragma once

#include <iostream>
#include <string>
#include "electricCar.h"
#include "gasolineCar.h"


using namespace std;

class HybridCar : public ElectricCar, public GasolineCar
{
public:
	string Drive() override;
	double FuelEfficiency() override;
	string ChargeBattery() override;
	string Refuel() override;
	string SwitchMode() override;
};