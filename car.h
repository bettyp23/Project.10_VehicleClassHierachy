//********************************************************
// File Name: car.h                                      *
// Description: Defines the Car class, which is a        *
//              subclass of Vehicle. This class includes *
//              attributes and methods specific to       *
//              cars, such as the car type (e.g., sedan, *
//              coupe, SUV).                             *
// Date: 03/20/25                                        *
// Author: Betty Phipps                                  *
//********************************************************
#include "vehicle.h"

class Car : public Vehicle {
public:
    Car();
    Car(string make, string model, int year, char fueltype, char color, int mileage, const string& cartype);

    void setcartype(const string& c);
    string getcartype();

    virtual void PrintData(const string header) override;

private:
    string cartype;
};