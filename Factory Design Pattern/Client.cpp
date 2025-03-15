#include <iostream>
#include "VehicleFactory.h"

int main() {
	std::string vehicleType;
	std::cin >> vehicleType;

	Vehicle* vehicle = VehicleFactory::getVehicleObject(vehicleType);
	vehicle->createVehicle();
	return 0;
}