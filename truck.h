//********************************************************
// File Name: truck.h                                    *
// Description: Defines the Truck class, which is a      *
//              subclass of Vehicle. This class includes *
//              attributes specific to trucks, such as   *
//              weight and the number of axles.          *
// Date: 03/20/25                                        *
// Author: Betty Phipps                                  *
//********************************************************
#include "vehicle.h"

class Truck : public Vehicle {
public:
    Truck();
    Truck(string make, string model, int year, char fueltype, char color, int mileage, int weight, int numOfAxels);

    int getweight();
    int getnumberofaxles();
    void setnumberofaxles(const int n);
    void setweight(const int w);

    virtual void PrintData(const string header) override;

private:
    int weight;
    int numOfAxles;
};