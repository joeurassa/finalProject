//
//  birthDate.hpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#ifndef birthDate_hpp
#define birthDate_hpp

#include <stdio.h>
#include <iostream>

class birthDate{
private:
    //birth-date variables
    int month;
    int day;
    int year;
public:
    //set birthdate here
    void setDate(int dMonth, int dDay, int dYear);
    
    
    //functions to return birthdate variables
    int getMonth()const;
    int getDay()const;
    int getYear()const;
    
    //funtion to display birthdate to user
    void displayDate()const;
    
    //birthdate constructor, having pre-assigned values
    birthDate(int dmonth = 1, int dDay = 1, int dYear = 1900);
    
};


#endif /* birthDate_hpp */
