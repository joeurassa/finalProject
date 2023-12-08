//
//  employeeType.cpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//


#include <iostream>

#include "person.hpp"
#include "birthDate.hpp"
#include "employeeID.hpp"
#include "employeeType.hpp"


using namespace std;

void employee::setEmployeeData(string first, string last, int dMonth,
                               int dDay, int dYear, int empID){
    emID = empID;
    name.setName(first, last);
    bDate.setDate(dMonth, dDay, dYear);
}

void employee::displayInfo()const{
    cout<<"Employee ID Number :"<<emID<<endl;
    cout<<"Name: ";name.displayName();
    cout<<"Birth Date: ";bDate.displayDate();
}

employee::employee(string first, string last,
                   int dMonth,int dDay, int dYear, int empID):
name(first, last),bDate(dMonth,dDay,dYear){
    emID = empID;
}
