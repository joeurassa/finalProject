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
#include "birthDate.hpp"
#include "person.hpp"
#include "employeeID.hpp"
#include "employeeType.hpp"


using namespace std;
class partTime:public employee{
private:
    double payRate;
    double hoursWorked;
    double daysOnduty;
    double daysOffduty;
    double sickDays;
public:
    double getPayRate();
    double getHoursWorked();
    double getDaysOnDuty();
    double getDaysOffDuty();
    double getSickDays();
    
//partTime(string, string, int,double,double,double,double,double);
};

#endif /* partTime_hpp */
