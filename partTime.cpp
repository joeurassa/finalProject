//
//  partTime.cpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//


#include <iostream>
#include <iomanip>
#include "partTime.hpp"

using namespace std;

//get & or calculate values


double partTime::getPayRate(){
    return payRate;
}
double partTime::getHoursWorked(){
    return hoursWorked;
}
double partTime::getDaysOnDuty(){
    return daysOnduty;
}
double partTime::getDaysOffDuty(){
    return daysOffduty;
}
double partTime::getSickDays(){
    return sickDays;
}
 
//partTime::partTime(string, string, int,double,double,double,double,double){}

