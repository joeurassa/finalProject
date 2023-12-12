//
//  partTime.cpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//


#include <iostream>
#include <iomanip>
#include "employeeType.hpp"
#include "partTime.hpp"

using namespace std;

//get & or calculate values
void partTime:: setPayRate(){
    double pRate = 15;
    payRate = pRate;
}
void partTime::setHrsWorked(){
    double hrsWorked = 0;
    if (hrsWorked == 0) {
        cout<<" No hours for ";tasker.displayPerson();
        cout<<endl;
    }
    else{
        hoursWorked = hrsWorked;
        tasker.displayPerson();
        cout<<" Worked :"<<hrsWorked<<endl;
    }
}
double partTime::getPayRate(){
    return payRate;
}
double partTime::getHoursWorked(){
    return hoursWorked;
}

double partTime::getPaid(){
    double pay = getPayRate()*getHoursWorked();
    return pay;
}

 //constructor with members
partTime::partTime(string,string, int,double,double):employee(){}
//empty constructor
partTime::partTime(){}
