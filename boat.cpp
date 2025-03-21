//**********************************************
// File Name: boat.cpp                         *
// Description: Implementation of Boat class   *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************

#include "boat.h"

//**********************************************
// Function Name: Boat (Constructor)           *
// Description: Initializes Boat with default  *
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Boat::Boat() : Vehicle (){}

//**********************************************
// Function Name: Boat (Parameterized)         *
// Description: Initializes Boat with provided *
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Boat::Boat(string make, string model, int year,char fueltype,char color, int mileage, string bt) :
    Vehicle (make, model, year, fueltype, color, mileage){
        setboattype(bt);
}

//**********************************************
// Function Name: setboattype                  *
// Description: Sets the boat type             *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Boat::setboattype(const string bt){
    boattype = bt;
}

//**********************************************
// Function Name: getboattype                  *
// Description: Returns the boat type          *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Boat::getboattype(){
    return boattype;
}

//**********************************************
// Function Name: PrintData                    *
// Description: Prints Boat details            *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Boat::PrintData(const string header){
    Vehicle::PrintData(header);
    cout<<"Boat Type:"<<boattype<<endl;
}