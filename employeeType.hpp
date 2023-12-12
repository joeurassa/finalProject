//
//  employeeType.hpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//

#ifndef employeeType_hpp
#define employeeType_hpp
#include <iostream>
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
    //virtual displayInfo function will be called when printing of employee
    //required, either full time or part time.
    void virtual displayInfo();
    void setEmployeeData();
    void addEmployee();
    employee();
    employee(string first, string last, int dMonth, int dDay, int dYear, int empID, string eType);
~employee();
    
};

#endif /* employeeType_hpp */
