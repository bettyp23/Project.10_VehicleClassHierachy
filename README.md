# Project 10: Vehicle Class Hierarchy

## Overview
This project implements a class hierarchy using inheritance in C++. The base class, `Vehicle`, contains common attributes such as make, model, color, fuel type, mileage, and year. Derived classes—`Car`, `Truck`, `Motorcycle`, and `Boat`—inherit from `Vehicle` and introduce unique attributes. The project demonstrates the use of virtual functions, constructors with initialization lists, and polymorphism through the `PrintData` function.

## Features

- Implements a base class, `Vehicle`, with common attributes.
- Defines derived classes (`Car`, `Truck`, `Motorcycle`, `Boat`) that inherit from `Vehicle` and introduce additional attributes.
- Uses a virtual function, `PrintData`, to display vehicle details.
- Implements constructors with initialization lists.
- Ensures proper encapsulation using getter and setter functions.
- Includes a `main.cpp` file to test the class hierarchy.
- Utilizes a `Makefile` for compilation.

## How to Compile and Run
1. Navigate to the project directory.
2. Run `make` to compile the project.
3. Execute `./main` to run the program.
4. Use `make clean` to remove compiled files.

## Requirements
- C++ compiler (e.g., g++)
- Make utility

## Files
- `Vehicle.h` – Base class declaration
- `Vehicle.cpp` – Base class implementation
- `Car.h`, `Truck.h`, `Motorcycle.h`, `Boat.h` – Derived class declarations
- `Car.cpp`, `Truck.cpp`, `Motorcycle.cpp`, `Boat.cpp` – Derived class implementations
- `main.cpp` – Program entry point and testing
- `Makefile` – Compilation instructions
