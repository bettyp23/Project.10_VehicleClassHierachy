//**********************************************
// File Name: truck.cpp                        *
// Description: Implementation of Truck class  *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
#include "truck.h"

//**********************************************
// Function Name: Truck (Constructor)          *
// Description: Initializes Truck with default *
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Truck::Truck() : Vehicle (){}

//**********************************************
// Function Name: Truck (Parameterized)        *
// Description: Initializes Truck with provided*
//              values                         *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
Truck::Truck(string make, string model, int year, char fueltype, char color, int mileage, int weight, int numOfAxels) : 
    Vehicle (make, model, year, fueltype, color, mileage){
        setnumberofaxles(numOfAxels);
        setweight(weight);
}

//**********************************************
// Function Name: getweight                    *
// Description: Returns the weight of the truck*
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
int Truck::getweight(){
    return weight;
}

//**********************************************
// Function Name: getnumberofaxles             *
// Description: Returns the number of axles    *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
int Truck::getnumberofaxles(){
    return numOfAxles;
}

//**********************************************
// Function Name: setnumberofaxles             *
// Description: Sets the number of axles       *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Truck::setnumberofaxles(const int n){
    numOfAxles = n;
}

//**********************************************
// Function Name: setweight                    *
// Description: Sets the weight of the truck   *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Truck::setweight(const int w){
    weight = w;
}

//**********************************************
// Function Name: PrintData                    *
// Description: Prints Truck details           *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Truck::PrintData(const string header){
    Vehicle::PrintData(header);
    cout<<"Weight:"<<weight<<endl;
    cout<<"Number of Axles:"<<numOfAxles<<endl;
}