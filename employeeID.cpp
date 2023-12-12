//
//  employeeID.cpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#include "employeeID.hpp"
#include <iostream>


using namespace std;

int employeeID::employeeCounter = 0;

int employeeID::getEmployeeID()const{
    return *eID;
}

int employeeID::getTotalEmployeeCounter(){
    return employeeCounter;
}

employeeID::employeeID(){
    employeeCounter++;
    eID = new int;
    *eID = employeeCounter;
}

void employeeID::printID()const{
    cout<<" "<<getEmployeeID()<<" "<<endl;
}




