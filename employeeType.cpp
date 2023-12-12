//
//  employeeType.cpp
//  payRollAppC++
//
//  Created by Joe on 12/4/23.
//


#include <iostream>
#include <cstring>
#include <iomanip>

#include "person.hpp"
#include "birthDate.hpp"
#include "employeeType.hpp"


using namespace std;
void employee::setEmployeeData(){
    string first,last;
    string emType;
    int eid =0;
    emID = eid;
    name.setName();
    bDate.setDate();
    name.setEtype();
}
void employee::addEmployee(){
    //creating an array of 100 objects employee
    
    int arrSize;
    cout<<" How many employees do you want to add? ";
    cin>>arrSize;
    employee *newEmployee = new employee[arrSize];
    
    for (int i = 0; i < arrSize; i++) {
        newEmployee->setEmployeeData();
        cout<<" Employee added successfully"<<endl<<endl;
        newEmployee++;
        cout<<endl;
        if(i == (arrSize -1)){
          cout<<" You have added "<<i+1<<" employee(s)."<<endl;
          cout<<" You have reached the maximum number of employees you can add."<<endl;
        }else{
          cout<<" You have added "<<i+1<<" employee(s)."<<endl;
          cout<<" Plese add "<<arrSize-i-1<<" more employee(s)."<<endl;
        }

    }
    
}

void employee::displayInfo(){
    cout<<endl<<endl;//separating output from input on terminal
    //Aligning out-put
    cout<<" NAME ";name.displayPerson();
    cout<<endl;
    cout<<" EMPLOYEE ID ";name.displayType();
    cout<<" BIRTH-DATE ";bDate.displayDate();
    cout<<endl;
    cout<<" TYPE ";name.displayType();
    cout<<endl;
    //displaying info
  
}
//constructors
employee::employee(string first, string last,int dMonth,int dDay,
                   int dYear, int empID, string emType)
                :name(first, last,emType),
                bDate(dMonth,dDay,dYear),emID(){}

employee::employee(){}
employee::~employee(){}
