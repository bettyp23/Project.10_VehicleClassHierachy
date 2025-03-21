#include <iostream>
#include "car.h"
#include "truck.h"
#include "motorcycle.h"
#include "boat.h"
using namespace std;
// **************************************************************
// * Name: main.cpp                                             *
// * Description:  This is a small sample main routine that     *
// *   tests the intructor's solution to the problem.           *
// *   The Print function exercises the accessor functions      *
// *   in the classes.  The mutator class is performed before   *
// *   each PrintData call to the virtual function.             *
// *   Your main routine may differ depending upon what you     *
// *   call  your functions.                                    *
// *   
// * Date: August 8th, 2024                                     *
// * Course: COP3330                                            *
// * Author: Dr. David A. Gaitros                               *
// **************************************************************
int main() {
    cout<<"Testing the Car Class"<<endl; 
    Car mycar("Ford","Mustang",2023,'G','E',9000,"Sedan");
    mycar.setcartype("2door"); 
    mycar.PrintData("Car Data");

    cout<<"Testing the Truck Class"<<endl; 
    Truck mytruck("Ford","F350",2023,'E','O',2500,4000,3);
    mytruck.setweight(5000);
    mytruck.setnumberofaxles(6); 
    mytruck.PrintData("Truck Data");

    cout<<"Testing the Motorcycle Class"<<endl; 
    Motorcycle mymotorcycle("Harley-Davidson","Sportster",2020,'G','I',4500,1200);
    mymotorcycle.setcubiccentimeters(900); 
    mymotorcycle.PrintData("Car Data");

    cout<<"Testing the Boat Class"<<endl; 
    Boat myboat("Barletta","L23QCSS",2023,'G','E',10000,"Inboard"); 
    myboat.PrintData("Boat Data"); 
    

    return 0;
}