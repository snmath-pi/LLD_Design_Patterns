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

#Builder Design Pattern
- creational design pattern utilised for creation of complex objects
- solves the problem of complex & telescopic constructors
- helps with immutable classes
- less need for exposing the setters
-pros
    - good way to address complexity
    - can be refactored
-cons
    - uses inner static class
    - class returned is immutable
    - u have to take into account end to end chain in design

### Step 1: Compile
```sh
g++ -std=c++17 -o Client Client.cpp Desktop.cpp HpDesktopBuilder.cpp DellDesktopBuilder.cpp
```
### Step 2: Run
```sh
./client
```
