#include "VehicleFactory.h"

Vehicle* VehicleFactory::getVehicleObject(std::string vehicle) {
	Vehicle* vehicleObj;


	if (vehicle == "car") {
		vehicleObj = new Car();
	}
	else if (vehicle == "bike") {
		vehicleObj = new Bike();
	}
	else if (vehicle == "bus") {
		vehicleObj = new Bus();
	}
	return vehicleObj;
}