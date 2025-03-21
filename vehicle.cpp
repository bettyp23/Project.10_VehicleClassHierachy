//************************************************
// File Name: vehicle.cpp                        *
// Description: Implementation of Vehicle class  *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************

#include "vehicle.h"
#include <iostream>
using namespace std;

//************************************************
// File Name: vehicle (Constructor)              *
// Description: Initialize vehicle with default  *
//              values                           *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
Vehicle::Vehicle() {
    year = DEFAULTYEAR;
    fueltype = DEFAULTFUELTYPE;
    color = DEFAULTCOLOR;
    mileage = DEFAULTMILEAGE;
}

//************************************************
// File Name: vehicle (Parameterized)            *
// Description: Initialize vehicle with Provided *                         
//              Values                           *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
Vehicle::Vehicle(string make, string model, int year,char fueltype,char color, int mileage){
    setmake(make);
    setmodel(model);
    setyear(year);
    setfueltype(fueltype);
    setcolor(color);
    setmileage(mileage);
}

//************************************************
// File Name: setmake                            *
// Description: sets the make of the vehicle     *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
void Vehicle::setmake(const string m){
    make = m;
}

//************************************************
// File Name: setmodel                           *
// Description: Sets the model of the vehicle    *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
void Vehicle::setmodel(const string m){
    model = m;
}

//************************************************
// File Name: setyear                            *
// Description: Sets the year of the vehicle     *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
void Vehicle::setyear(const int y){
    y > 1900 ? year = y : year = DEFAULTYEAR;
}

//************************************************
// File Name: setfueltype                        *
// Description: Sets the fuel type with          *
//              validation                       *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
void Vehicle::setfueltype(const char f){
    if ( f == 'E' || f == 'G' || f == 'D' || f == 'W' || f == 'P'){
        fueltype = f;
    } else {
        fueltype = DEFAULTFUELTYPE;     //default to 'G' Gasoline
    }
}

//************************************************
// File Name: setcolor                           *
// Description: Sets the color of vehicle with   *
//              validation                       *
// Date: 03/20/25                                *
// Author: Betty Phipps                          * 
//************************************************
void Vehicle::setcolor(const char c){
    if (c == 'R' || c == 'O' || c == 'Y' || c == 'G' || c == 'I' || c == 'V' || c == 'E'){
        color = c;
    } else {
        color = DEFAULTCOLOR;       //default to 'R' Red
    }
}

//**********************************************
// Function Name: setmileage                   *
// Description: Sets the mileage with          *
//              validation                     *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Vehicle::setmileage(const int m){
    if (m > 0){
        mileage = m;
    } else {
        mileage = DEFAULTMILEAGE;
    }
}

//**********************************************
// Function Name: getmake                      *
// Description: Returns the make of the vehicle*
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Vehicle::getmake(){
    return make;
}

//**********************************************
// Function Name: getmodel                     *
// Description: Returns the model of the       *
//              vehicle                        *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Vehicle::getmodel(){
    return model;
}

//**********************************************
// Function Name: getyear                      *
// Description: Returns the year of the vehicle*
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
int Vehicle::getyear(){
    return year;
}

//**********************************************
// Function Name: getfueltype                  *
// Description: Returns full fuel type name    *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Vehicle::getfueltype(){
    switch (fueltype){
        case 'E' : return "Electric/Solar";
        case 'G' : return "Gasoline";
        case 'D' : return "Diesel";
        case 'W' : return "Wind";
        case 'P' : return "Pedal";
        default  : return "Gasoline";   //default case
    }
}

//**********************************************
// Function Name: getcolor                     *
// Description: Returns full color name        *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
string Vehicle::getcolor(){
    switch (color){
        case 'R' : return "Red";
        case 'O' : return "Orange";
        case 'Y' : return "Yellow";
        case 'G' : return "Green";
        case 'B' : return "Blue";
        case 'I' : return "Indigo";
        case 'V' : return "Violet";
        case 'E' : return "Ebony/Black";
        default  : return "Red";        //default case
    }
}

//**********************************************
// Function Name: getmileage                   *
// Description: Returns the mileage of the     *
//              vehicle                        *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
int Vehicle::getmileage(){
    return mileage;
}

//**********************************************
// Function Name: PrintData                    *
// Description: Prints vehicle details with    *
//              a header message               *
// Date: 03/20/25                              *
// Author: Betty Phipps                        * 
//**********************************************
void Vehicle::PrintData(const string header){
    cout<<"******** "<<header<<" ********"<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Make: "<<make<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Color: "<<getcolor()<<endl;      //using getcolor() for proper output and not letter
    cout<<"Mileage: "<<mileage<<endl;
}