//  ****************************************************************
//  * Name: Vehicle Class                                          *
//  * Description:  Base Vehicle header file.   It is important    *
//  *    to note that the main routine would not create an object  *
//  *    of type Vehicle.   The class must be inherited.           *
//  * Author: Dr. David A. Gaitros                                 *
//  * Date: August 3rd, 2024                                       *
//  * Class: COP3330                                               *
//  ****************************************************************

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;
const int DEFAULTYEAR=1900;
const int DEFAULTMILEAGE=0;
const char DEFAULTCOLOR='R';
const char DEFAULTFUELTYPE='G';
const int DEFAULTWEIGHT=0;
const int DEFAULTNUMBEROFAXLES=2;
const int DEFAULTCUBICCENTIMETERS=100;class Vehicle {
public:
    Vehicle();
    Vehicle(string make, string model, int year,char fueltype,char color, int mileage);
protected:
    void setmake(const string m);
    void setmodel(const string m);
    void setyear(const int y);            // Must be greater than 1900
    void setfueltype(const char f);       // Must be E, G, D, W, or P
    void setcolor(const char c);          // Must be R,O,Y,G,I,V,or E
    void setmileage(const int m);         // Must be greater than zero
    string getmake();
    string getmodel();
    int getyear();
    string getfueltype();
    string getcolor();
    int getmileage();
    virtual void PrintData(const string header); // Pass in a header message
private:
    string make;
    string model;
    int year;        // Greater than 1900
    char fueltype;   // E=Electric/Solar, G=Gasoline, D=Diesel, W=Wind, P=Pedal
    char color;      // R=Red, O=Orange, Y=Yellow, G=Green, B=Blue, I=Indigo, V=Violet, E=Ebony/Balck
    int mileage;     // Stored in miles, whole number, greater than zero};
};
#endif //VEHICLE_H