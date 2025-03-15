#ifndef VehicleFactory_hpp
#define VehicleFactory_hpp


#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Bike.h"

class VehicleFactory
{
public:
	static Vehicle* getVehicleObject(std::string vehicle);
};
#endif