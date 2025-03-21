//**********************************************
// File Name: car.cpp                          *
// Description: Implementation of Car class    *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
#include "car.h"

//**********************************************
// Function Name: Car (Constructor)            *
// Description: Initializes Car with default   *
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Car::Car() : Vehicle(){}

//**********************************************
// Function Name: Car (Parameterized)          *
// Description: Initializes Car with provided  *
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Car::Car(string make, string model, int year, char fueltype, char color, int mileage, const string& type) : 
Vehicle (make, model, year, fueltype, color, mileage) {
    setcartype(type);
}

//**********************************************
// Function Name: setcartype                   *
// Description: Sets the car type              *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Car::setcartype(const string& c){
    cartype = c;
}

//**********************************************
// Function Name: getcartype                   *
// Description: Returns the car type           *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Car::getcartype(){
    return cartype;
}

//**********************************************
// Function Name: PrintData                    *
// Description: Prints Car details             *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Car::PrintData(const string header){
    Vehicle::PrintData(header);
    cout<<"Car Type:"<<cartype<<endl;
}