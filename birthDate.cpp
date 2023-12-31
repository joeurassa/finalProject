//
//  birthDate.cpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#include <iostream>
#include "birthDate.hpp"

using namespace std;

//FUNCTION IMPLEMENTATIONS.
//set date
void birthDate::setDate(){
    int dMonth = 1;
    int dDay = 1;
    int dYear = 1900;
    cout<<" Enter birth month: ";
    cin>>dMonth;
    month = dMonth;
    cout<<" Enter day: ";
    cin>>dDay;
    day = dDay;
    cout<<" Enter birth year: ";
    cin>>dYear;
    year = dYear;
}
//get month
int birthDate::getMonth()const{
    return month;
}

//get day
int birthDate::getDay()const{
    return day;
}

//get year of birth
int birthDate::getYear()const{
    return year;
}
void birthDate::displayDate()const{
    cout<<" "<<month<<"/"<<day<<"/"<<year;
}

//birth-date constructor
birthDate::birthDate(int dMonth, int dDay, int dYear){
    month = dMonth;
    day = dDay;
    year = dYear;
}
birthDate::~birthDate(){}
