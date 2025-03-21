//**********************************************
// File Name: motorcycle.cpp                   *
// Description: Implementation of Motorcycle   *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************

#include "motorcycle.h"

//**********************************************
// Function Name: Motorcycle (Constructor)     *
// Description: Initializes Motorcycle with    *
//              default values                 *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Motorcycle::Motorcycle() : Vehicle (){}

//**********************************************
// Function Name: Motorcycle (Parameterized)   *
// Description: Initializes Motorcycle with    *
//              provided values                *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Motorcycle::Motorcycle(string make, string model, int year,char fueltype,char color, int mileage, const int c) :
    Vehicle (make, model, year, fueltype, color, mileage){
        setcubiccentimeters(c);
}

//**********************************************
// Function Name: getcubiccentimeters          *
// Description: Returns engine displacement in *
//              cubic centimeters (CC)         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
int Motorcycle::getcubiccentimeters(){
    return numOfCC;
}

//**********************************************
// Function Name: setcubiccentimeters          *
// Description: Sets the engine displacement   *
//              in cubic centimeters           *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Motorcycle::setcubiccentimeters(const int c){
    numOfCC = c;
}

//**********************************************
// Function Name: PrintData                    *
// Description: Prints Motorcycle details      *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Motorcycle::PrintData(const string header){
    Vehicle::PrintData(header);
    cout<<"Cubic Centimeters:"<<numOfCC<<endl;
}