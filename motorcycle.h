//********************************************************
// File Name: motorcycle.h                               *
// Description: Defines the Motorcycle class, which      *
//              is a subclass of Vehicle. This class     *
//              includes attributes specific to          *
//              motorcycles, such as engine displacement *
//              measured in cubic centimeters (CC).      *
// Date: 03/20/25                                        *
// Author: Betty Phipps                                  *
//********************************************************
#include "vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle();
    Motorcycle(string make, string model, int year,char fueltype,char color, int mileage, const int c);

    void setcubiccentimeters(const int c);
    int getcubiccentimeters();

    virtual void PrintData(const string header) override;

private:
    int numOfCC;
};