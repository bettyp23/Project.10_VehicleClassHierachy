# Makefile for Vehicle Class Hierarchy
# Betty Phipps
# Date: 03/16/2025
# Run 'make' to compile and './vehicle' to execute

# Name of executable
vehicle: main.o vehicle.o car.o truck.o motorcycle.o boat.o
	g++ $(CXXFLAGS) main.o vehicle.o car.o truck.o motorcycle.o boat.o -o vehicle

# Compile main.cpp into main.o
main.o: main.cpp vehicle.h car.h truck.h motorcycle.h boat.h
	g++ $(CXXFLAGS) -c main.cpp

# Compile vehicle.cpp into vehicle.o
vehicle.o: vehicle.cpp vehicle.h
	g++ $(CXXFLAGS) -c vehicle.cpp

# Compile car.cpp into car.o
car.o: car.cpp car.h vehicle.h
	g++ $(CXXFLAGS) -c car.cpp

# Compile truck.cpp into truck.o
truck.o: truck.cpp truck.h vehicle.h
	g++ $(CXXFLAGS) -c truck.cpp

# Compile motorcycle.cpp into motorcycle.o
motorcycle.o: motorcycle.cpp motorcycle.h vehicle.h
	g++ $(CXXFLAGS) -c motorcycle.cpp

# Compile boat.cpp into boat.o
boat.o: boat.cpp boat.h vehicle.h
	g++ $(CXXFLAGS) -c boat.cpp

# Clean up object files and the executable
clean:
	rm -rf *.o vehicle

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra