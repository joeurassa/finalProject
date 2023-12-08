//
//  employeeType.hpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//

#ifndef employeeType_hpp
#define employeeType_hpp

#include <stdio.h>
#include <string>

#include "person.hpp"
#include "birthDate.hpp"



using namespace std;
class employee{
private:
    //using composition to simplify data access
    person name;
    birthDate bDate;
    int emID;
public:
    void setEmployeeData(string first, string last, int dMonth, int dDay, int dYear, int empID);
    void displayInfo()const;
    employee(string first ="", string last = "", int dMonth = 1, int dDay = 1, int dYear = 1900, int empID = 0);
  
};

#endif /* employeeType_hpp */
