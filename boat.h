//********************************************************
// File Name: boat.h                                     *
// Description: Defines the Boat class, which is a       *
//              subclass of Vehicle. This class includes *
//              attributes and functions specific to     *
//              boats, such as the boat type.            *
// Date: 03/20/25                                        *
// Author: Betty Phipps                                  *
//********************************************************
#include "vehicle.h"

class Boat : Vehicle {
public:
    Boat();
    Boat(string make, string model, int year,char fueltype,char color, int mileage, string bt);

    void setboattype(const string bt);
    string getboattype();

    virtual void PrintData(const string header) override;

private:
    string boattype;
};