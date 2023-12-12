//
//  partTime.hpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//

#ifndef partTime_hpp
#define partTime_hpp

#include <stdio.h>
#include <iostream>
#include "person.hpp"
#include "employeeType.hpp"


using namespace std;
class partTime:public employee{
private:
    double payRate;
    double hoursWorked;
    person tasker;
    
public:
    //set & get payrate
    void setPayRate();
    double getPayRate();
    //set & get employee worked hours
    void setHrsWorked();
    double getHoursWorked();
    //calculate salary.
    double getPaid();
    partTime(string, string, int,double,double);
    partTime();
    ~partTime();
};


#endif /* partTime_hpp */
