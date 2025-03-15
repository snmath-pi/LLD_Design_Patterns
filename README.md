# Factory Design Pattern

This repository demonstrates the **Factory Design Pattern** in C++. The factory pattern is a creational design pattern that provides an interface for creating objects while allowing subclasses to alter the type of objects that will be created.

## Overview

The project consists of a **Vehicle Factory** that creates different types of vehicles such as **Car, Bike, and Bus**. This pattern helps in encapsulating object creation logic and promotes code maintainability.

## Compilation and Execution

Follow these steps to compile and run the project:

### Step 1: Compile the Source Files
```sh
g++ -c ./Car.cpp ./Bike.cpp ./Vehicle.h ./VehicleFactory.cpp ./Bus.cpp
ar ru vehicle_library.a ./Car.o ./VehicleFactory.o ./Bike.o ./Bus.o
g++ -o client ./Client.cpp vehicle_library.a
./client
```

├── Car.cpp
├── Bike.cpp
├── Bus.cpp
├── Vehicle.h
├── VehicleFactory.cpp
├── Client.cpp
├── vehicle_library.a (Generated after Step 2)
├── README.md
